/*********************************************************************************
**                                                                              **
**                         Tipus de dades i operadors                           **
**                                                                              **
**                                                                              **
**    Nom: Pol Careta                                          Data:24/11/21    **
*********************************************************************************/
//*************************** Includes *******************************************

//************************** Variables *******************************************
int test = 32767;

//**************************** Setup *********************************************

void setup() {            // Configura el final salida
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is: ");
  Serial.println(test);
}

//**************************** Loop **********************************************

void loop() {             
    


}

//************************* Funcions *********************************************
