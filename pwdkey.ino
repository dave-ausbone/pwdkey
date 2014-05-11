#include "DigiKeyboard.h"



void setup() 
{
  
pinMode(0, OUTPUT); //Voltage Source 
pinMode(1, OUTPUT); //LED
pinMode(2, INPUT); //Button 2 Input
pinMode(5, INPUT); //Button 5 Input
digitalWrite(0,HIGH); //Turn on the source

}


void loop() 
{

DigiKeyboard.sendKeyStroke(0); 

digitalWrite(1, LOW); //Make the LED blink
DigiKeyboard.delay(250);
digitalWrite(1, HIGH);
DigiKeyboard.delay(250);
digitalWrite(1, LOW);
DigiKeyboard.delay(250); 
digitalWrite(1, HIGH);
DigiKeyboard.delay(250);
  
if(digitalRead(2)==HIGH)

{//check again
    
	if(digitalRead(2)==HIGH)
	{
 
		if(digitalRead(2)==HIGH) 
		DigiKeyboard.print("passwordpassword");

	}
    
	digitalWrite(0,LOW);  //Make sure not to trigger twice
    
	DigiKeyboard.delay(1500);
    
	digitalWrite(0,HIGH);
  
}


if(digitalRead(5)==HIGH)

{//check again
    
	if(digitalRead(5)==HIGH)
	{
 
		if(digitalRead(5)==HIGH) 
		DigiKeyboard.print("passwordpassword");

	}
    
	digitalWrite(0,LOW);  //Make sure not to trigger twice
    
	DigiKeyboard.delay(1500);
    
	digitalWrite(0,HIGH);
  
}


}
