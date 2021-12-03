/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempaigua = 101;

//********** Setup ****************************************************************
void setup()              
{
  Serial.begin(9600); 
  
  if ( tempaigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
  else if ( tempaigua >= 90 & tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if (tempaigua == 100)
  {
    Serial.print("Aigua a 100C");
  }
  else
  {
    Serial.print("Aigua bullint");   
  }
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
