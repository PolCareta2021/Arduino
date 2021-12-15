/*********************************************************************************
**                                                                              **
**                         Array de 8 leds                                      **
**                                                                              **
**                                                                              **
**    Nom: Pol Careta                                          Data:15/12/21    **
*********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
byte buttonState = 0;         // per guardar l’estat en que és troba el button


//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
  }


//********** Loop *****************************************************************
void loop()
{
        buttonState = digitalRead(buttonPin);  //llegir l’estat del button i gardar-lo
  if (buttonState == 0)  //polsador premut, muntat amb Pull-up
  {

    digitalWrite (led0, HIGH);
  }

  else

    {

  digitalWrite (led0, LOW);
 }
}
//********** Funcions *************************************************************
