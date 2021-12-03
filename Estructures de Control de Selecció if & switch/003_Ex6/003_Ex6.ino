/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int sensorReading = 1;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) 
    {
  case 0:    
    Serial.println("Dark");
    
    break;
  case 1:    
    Serial.println("Dim");
    
    break;
  case 2:    
    Serial.println("Medium");
    
    break;
  case 3:
    Serial.println("Bright");
    
    break;
  default:
    Serial.println("... I don't know!!");
  } 
}

    
//********** Loop *****************************************************************
void loop()    // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
