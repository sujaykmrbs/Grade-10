#define LED 2
void setup()
{
Serial.begin(9600);
pinMode(LED, OUTPUT);
}
void loop()
{
digitalWrite(LED, HIGH);
Serial.println("LED_STATUS--> ON");
delay(1000);
digitalWrite(LED, LOW);
Serial.println("LED_STATUS--> OFF");
delay(1000);
}