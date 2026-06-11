#include <SoftwareSerial.h>

SoftwareSerial lora(2, 3); // RX, TX

const int relayPin = 7;

String incoming = "";

void setup()
{
  pinMode(relayPin, OUTPUT);

  Serial.begin(9600);
  lora.begin(9600);

  digitalWrite(relayPin, LOW);
}

void loop()
{
  while (lora.available())
  {
    char c = lora.read();

    if (c == '\n')
    {
      incoming.trim();

      Serial.print("Received: ");
      Serial.println(incoming);

      // TURN MOTOR ON
      if (incoming == "ON")
      {
        digitalWrite(relayPin, LOW);
        lora.println("MOTOR ON");
        Serial.println("Motor ON");
      }

      // TURN MOTOR OFF
      else if (incoming == "OFF")
      {
        digitalWrite(relayPin, HIGH);
        lora.println("MOTOR OFF");
        Serial.println("Motor OFF");
      }

      incoming = "";
    }
    else
    {
      incoming += c;
    }
  }
}
