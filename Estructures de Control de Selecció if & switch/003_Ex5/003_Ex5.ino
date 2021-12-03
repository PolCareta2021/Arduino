/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int energia = 47;

//********** Setup ****************************************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  if (energia >= 43.2)
  {
    Serial.print("G");
  } 
  else if (energia >= 38.2 && energia < 43.2)
  {
    Serial.print ("F");
  }
  else if (energia >= 17.7 && energia < 38.2)
 {
   Serial.print ("E");
 }
 else if (energia >= 11.1 && energia <17.5)
 {
   Serial.print ("D");
 }
 else if (energia >= 6.5 && energia < 11.1)
{
    Serial.print ("C");
}
else if (energia > 3.5 && energia < 6.5)

{
  Serial.print ("B");
}

else 

{
  Serial.print ("A");
}
}


    
//********** Loop *****************************************************************
void loop()    // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
