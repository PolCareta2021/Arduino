/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempaigua = 95;

//********** Setup ****************************************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempaigua < 90)
  {
    Serial.print("Aigua encara jo bull!!");
  } 
  else if (tempaigua >=95 && tempaigua < 100)
  {
    Serial.print ("Aigua apunt de bullir");
  }

 else if ( tempaigua == 100)

 {
  Serial.print ("aigua 100C!!!");
 }
 else
 {
  Serial.print ("Aigua bullint!!!");
 }
}

    
//********** Loop *****************************************************************
void loop()    // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
