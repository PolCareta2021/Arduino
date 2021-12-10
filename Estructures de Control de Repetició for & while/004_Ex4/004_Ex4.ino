/*********************************************************************************
**                                                                              **
**             Estructura de Control de Repetició for & while                   **
**                                                                              **
**                                                                              **
**    Nom: Pol Careta                                          Data:10/12/21    **
*********************************************************************************/
//*************************** Includes *******************************************

//************************** Variables *******************************************
int taula = 2;
//********** Setup ****************************************************************

void setup()      
{
  Serial.begin(9600);    
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);    
  }
}


    
//********** Loop *****************************************************************
void loop()    
{
}

//********** Funcions *************************************************************
