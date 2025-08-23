#include<LiquidCrystal.h>

int rs=12;
int e=11;
int d4=4;
int d5=5;
int d6=6; 
int d7=7;


LiquidCrystal lcd(rs,e,d4,d5,d6,d7);




void setup()
{
lcd.begin(16,2);
lcd.print("parvez mosharrof");  
}



void loop()
{
// no code 
}
