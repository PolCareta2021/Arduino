/*********************************************************************************
**                                                                              **
**                         Comunicaci√≥ serie basica                             **
**                                                                              **
**                                                                              **
**    Nom: Pol Careta                                          Data:24/11/21    **
*********************************************************************************/
//*************************** Includes *******************************************

//************************** Variables *******************************************
int a = 5, b = 10, c = 20;
//**************************** Setup *********************************************

void setup() {            // Configura el final salida
  Serial.begin(9600);
Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // add
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiply
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divide
  Serial.println(c / b);

  Serial.print("c % b = ");       // module
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // subtract
  Serial.println(b - c);

}

//**************************** Loop **********************************************

void loop() {             
    


}

//************************* Funcions *********************************************
