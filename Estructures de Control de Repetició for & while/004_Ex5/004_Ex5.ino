/*********************************************************************************
**                                                                              **
**             Estructura de Control de Repetició for & while                   **
**                                                                              **
**                                                                              **
**    Nom: Pol Careta                                          Data:10/12/21    **
*********************************************************************************/
//*************************** Includes *******************************************

//************************** Variables *******************************************
int Taula = 2;
//********** Setup ****************************************************************

void setup()      
{
  Serial.begin(9600);     

  for (int Taula=2; Taula <= 10; Taula++)
  {
    Serial.print("Taula de multipilcar del ");
    
    Serial.println(Taula);
    
    for (int i=0; i <= 10; i++)
    
    {
      delay(100);
      
      Serial.print(Taula);
      
      Serial.print(" x ");
      
      Serial.print(i);
      
      Serial.print( " = ");
      
      Serial.println(Taula*i);    
    }
    Serial.println(Taula);
    
  } 
}

    
//********** Loop *****************************************************************
void loop()    
{
}

//********** Funcions *************************************************************
