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
 Serial.println("Lets calculate a hypoteneuse");

  h = sqrt(a*a + b*b);
      
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(h);
}

//**************************** Loop **********************************************

void loop() {             
    


}

//************************* Funcions *********************************************
