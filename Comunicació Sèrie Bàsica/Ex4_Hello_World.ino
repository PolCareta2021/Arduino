/*********************************************************************************
**                                                                              **
**                              Escull un numero                                **
**                                                                              **
**                                                                              **
**    Nom: Pol Careta                                          Data:22/11/21    **
*********************************************************************************/
//*************************** Includes *******************************************

//************************** Variables *******************************************

//**************************** Setup *********************************************

void setup() {            // Configura el final salida
Serial.begin(9600);       

}

//**************************** Loop **********************************************

void loop() {              // Inicia el bucle del programa


  Serial.println("Escull el numero de l'operació que vols realitzar?");  
  delay(1000);
   Serial.println("1. Comprovar numero de tarjeta de credit");  
  delay(1000);
   Serial.println("2. Comprovar numero de compte bancari");  
  delay(1000);
   Serial.println("3. Buscar un digit perdut de tarjeta de credit");  
  delay(1000);
}


//************************* Funcions *********************************************
