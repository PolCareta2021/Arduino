/*********************************************************************************
**                                                                              **
**             Estructura de Control de Selecció if & switch                    **
**                                                                              **
**                                                                              **
**    Nom: Pol Careta                                          Data:03/12/21    **
*********************************************************************************/
//*************************** Includes *******************************************

//************************** Variables *******************************************
int tempaigua = 95;

//********** Setup ****************************************************************

void setup()              
{
  Serial.begin(9600);     

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
}

    
//********** Loop *****************************************************************
void loop()    
{
}

//********** Funcions *************************************************************
