// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500); // Espera por 1500 millisecondos
  digitalWrite(LED_BUILTIN, LOW);
  delay(1500); // Espera por 1500 millisecondos
}