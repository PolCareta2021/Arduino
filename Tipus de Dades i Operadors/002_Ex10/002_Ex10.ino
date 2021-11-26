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
long drive_kb;
long real_drive_mb;
long real_drive_kb;


//**************************** Setup *********************************************

void setup() {            // Configura el final salida
  Serial.begin(9600);     //set up Serial library at 9600 bps

Serial.print ("Your HD is ");
Serial.print (drive_gb);
Serial.println (" GB Large");

drive_mb = drive_gb;  
drive_mb = drive_mb * 1024;


Serial.print ("In theory, it can store ");
Serial.print (drive_mb);
Serial.print (" Megabyte, ");

drive_kb = drive_mb;
drive_kb = drive_kb * 1024;

Serial.print (drive_kb );
Serial.println ("Kilobytes");

real_drive_mb = drive_gb;

real_drive_mb = real_drive_mb * 1000;

Serial.print ("But in really only stores " );
Serial.print (real_drive_mb);
Serial.print (" Megabyte, ");
 
real_drive_kb = real_drive_mb;

real_drive_kb = real_drive_kb * 1000;

Serial.print (real_drive_kb);
Serial.println (" Kilobytes"); 

 real_drive_kb = drive_kb - real_drive_kb;

Serial.print ("You are missing ");
Serial.print (real_drive_kb);


}
//**************************** Loop **********************************************

void loop() {             
    //mamauevo


}

//************************* Funcions *********************************************
