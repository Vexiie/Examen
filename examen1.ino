#define rojo 11
#define azul 10
#define verde 9
#define magenta 12
#define boton1 7
void setup()
{
  pinMode( boton1 , INPUT );
  pinMode( rojo , OUTPUT );
  pinMode( magenta , OUTPUT );
  pinMode( azul , OUTPUT );
  pinMode( verde , OUTPUT );
  Serial.begin( 9600 );
}

void loop()
{
  digitalWrite(rojo, HIGH);
  digitalWrite(magenta, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  delay(4000);
  digitalWrite(magenta, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(azul, LOW);
  delay(4000);
   digitalWrite(verde, HIGH);
  digitalWrite(magenta, LOW);
  digitalWrite(rojo, LOW);
  digitalWrite(azul, LOW);
  delay(4000);
    digitalWrite(azul, HIGH);
  digitalWrite(magenta, LOW);
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  delay(4000);
}
