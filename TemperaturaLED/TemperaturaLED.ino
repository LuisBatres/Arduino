// C++ code
//

//20 GRADOS VERDE
//40 GRADOS AMARILLO
//80 GRADOS NARANJA
//MAX ROJO

float temperatura;
int bLED = 7;
int yLED = 6;
int oLED = 5;
int rLED = 4;
void setup()
{
  Serial.begin(9600);
  pinMode(bLED, OUTPUT);
  pinMode(yLED, OUTPUT);
  pinMode(oLED, OUTPUT);
  pinMode(rLED, OUTPUT);
}

void loop()
{
  int valorArduino = analogRead(A0);
  float voltaje = (valorArduino/1024.0)*8.50;
  temperatura = (voltaje - 0.5) * 100;
  Serial.print(" ValorArduino:");
  Serial.print(valorArduino);
  Serial.print(" Voltaje:");
  Serial.print(voltaje);
  Serial.print(" Temperatura:");
  Serial.println(temperatura);
  delay(1000);
  
  // Apagar LEDs
  digitalWrite(bLED, LOW);
  digitalWrite(yLED, LOW);
  digitalWrite(oLED, LOW);
  digitalWrite(rLED, LOW);

  // Encender el LED segun la temperatura
  if (temperatura <= 20)
    digitalWrite(bLED, HIGH);
  else if (temperatura > 20 && temperatura <= 40)
    digitalWrite(yLED, HIGH);
  else if (temperatura > 40 && temperatura <= 80)
    digitalWrite(oLED, HIGH);
  else
    digitalWrite(rLED, HIGH);          
}