/*CODIGO CREADO POR ALGOBACK YOUTUBE CHANNEL*/

#include <DHT.h>      // INCLUIR LIBRERIA
#include <LiquidCrystal.h>           //importar libreria

LiquidCrystal lcd(8,7,6,5,4,3,2);    //crear el objeto con los pines que se van a usarxxxxxxxxxx
DHT dht(9, DHT11);    // CREAR UN OBJETO PASANDO PIN Y TIPO DE SENSOR POR PARAMETROS

void setup() {
  delay(6000);
  Serial.begin(9600); // INICIALIZAR LA COMUNICACION SERIAL
  dht.begin();        // INICIALIZAR EL DHT
  lcd.begin (16, 2); // inicializar la pantalla con la cantidad de fila y columna que esta tiene
}

void loop() {

  float TemC = dht.readTemperature();            // GRADOS CELCIUS
  float TemF = dht.readTemperature(true);        // GRADOS FAHRENHEIT
  float Humd = dht.readHumidity();               // HUMEDAD
  if(isnan(TemC) || isnan(TemF) || isnan(Humd)){ // SI LO QUE DEBUELVE NO ES UN NUMERO
      //Serial.println("Revisar conexion");        // IMPRIMIR MENSAJE DE HERRROR
      lcd.setCursor(0, 0); //COLOCAR EN POSICION
      lcd.print("Revisar conexion");
      lcd.setCursor(0, 1); //COLOCAR EN POSICION
      lcd.print("Revisar conexion");
    }
    else
    {
      lcd.setCursor(0, 0); //COLOCAR EN POSICION
      lcd.print("Tem:"+ String(TemC,1) + "C  " + String(TemF,1) +"F ");
      lcd.setCursor(0, 1); //COLOCAR EN POSICION
      lcd.print("Hum:"+ String(Humd,1) + "% ");
    }
  delay(5000);   //ESPERAR 5 SEGUNDOS
}
