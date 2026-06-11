#include <SoftwareSerial.h>

SoftwareSerial lora(2, 3);

const int buttonON = 7;
const int buttonOFF = 9;

const int ledOn = 8;
const int ledOff = 10;

String incoming = "";

void setup()
{
  pinMode(buttonON, INPUT_PULLUP);
  pinMode(buttonOFF, INPUT_PULLUP);

  pinMode(ledOn, OUTPUT);
  pinMode(ledOff, OUTPUT);

  Serial.begin(9600);
  lora.begin(9600);

  digitalWrite(ledOn, LOW);
  digitalWrite(ledOff, LOW);
}

void loop()
{
  // ON BUTTON
  if (digitalRead(buttonON) == LOW)
  {
    lora.println("ON");
    Serial.println("Sent: ON");
    delay(300);
  }

  // OFF BUTTON
  if (digitalRead(buttonOFF) == LOW)
  {
    lora.println("OFF");
    Serial.println("Sent: OFF");
    delay(300);
  }

  // RECEIVE FEEDBACK
  while (lora.available())
  {
    char c = lora.read();

    if (c == '\n')
    {
      incoming.trim();

      Serial.print("Received: ");
      Serial.println(incoming);

      if (incoming == "MOTOR ON")
      {
        digitalWrite(ledOn, HIGH);
        digitalWrite(ledOff, LOW);
      }
      else if (incoming == "MOTOR OFF")
      {
        digitalWrite(ledOn, LOW);
        digitalWrite(ledOff, HIGH);
      }

      incoming = "";
    }
    else
    {
      incoming += c;
    }
  }
}
