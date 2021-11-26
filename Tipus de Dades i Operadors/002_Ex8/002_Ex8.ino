/*********************************************************************************
**                                                                              **
**                         Tipus de dades i operadors                           **
**                                                                              **
**                                                                              **
**    Nom: Pol Careta                                          Data:24/11/21    **
*********************************************************************************/
//*************************** Includes *******************************************

//************************** Variables *******************************************
int drive_gb = 100;
long drive_mb;
//**************************** Setup *********************************************

void setup() {            // Configura el final salida
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//**************************** Loop **********************************************

void loop() {             
    


}

//************************* Funcions *********************************************
