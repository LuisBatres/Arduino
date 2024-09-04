int LED = 4; // Pin inicial
bool band = true;

void setup()
{
  for (int i = 4; i <= 13; i++) {
    pinMode(i, OUTPUT); // Configurar todos los pines del 4 al 13 como salida
  }
}

void loop()
{
  if(band) 
  {
    digitalWrite(LED, HIGH);
    delay(200); // Espera 200 milisegundos
    digitalWrite(LED, LOW);
    delay(200); // Espera 200 milisegundos 
    
    LED++;
    
    if(LED > 13) {
      LED = 12;  // Ajusta el valor de LED para regresar
      band = false;
    }
  } 
  else
  {
    digitalWrite(LED, HIGH);
    delay(200); // Espera 200 milisegundos
    digitalWrite(LED, LOW);
    delay(200); // Espera 200 milisegundos
    
    LED--;
    
    if(LED < 4) {
      LED = 3;  // Ajusta el valor de LED para ir hacia adelante
      band = true;
    }
  }
}