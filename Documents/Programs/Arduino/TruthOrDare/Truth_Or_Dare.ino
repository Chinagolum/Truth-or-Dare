#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
const int greenLight = 10;
const int redLight = 9;
int switchState = 0;
int prevSwitchState = 0;
int reply;
int k = 0;
//int Shot;
bool yahoo = false;
int doubleShot;
String gameMembers [8] = {"Sofia","Rachel","Steph","Chi-chi","Joel","Brian", "Mo", "Nick" };

void setup() { 
  pinMode(switchPin,INPUT);
  lcd.print("Truth or");
  lcd.setCursor(0, 1); 
  lcd.print("Drink, Pussy");
  }
void loop() {
  pinMode(greenLight, OUTPUT);
  pinMode(redLight, OUTPUT);
  lcd.begin(16, 2); 
  
  switchState = digitalRead(switchPin);
 
  if (switchState != prevSwitchState)  {    
    if (switchState == LOW) {
      if(k!=10){
        
      }
      digitalWrite(redLight,LOW);
      digitalWrite(greenLight,LOW);
      reply = random(8);
      doubleShot = random(13);




      if(gameMembers[reply]== "Sofia") {
        yahoo = !yahoo;
        if(yahoo == true) {
     
         lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Shot "); 
 digitalWrite(redLight,OUTPUT); 
 lcd.setCursor(0, 1); 
        } else {
          lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Look's like it\'s: "); 
 lcd.setCursor(0, 1);
        }
      } else if (doubleShot == 1 || doubleShot==2 ){
        lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Shot "); 
 lcd.setCursor(0, 1);
 digitalWrite(redLight,OUTPUT); 
      } else if( doubleShot == 3 ){
              lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Double Shot "); 
 lcd.setCursor(0, 1); 
 digitalWrite(greenLight,OUTPUT);
      } else if( doubleShot == 4 ){
              lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Pick a player "); 
 lcd.setCursor(0, 1); 
      }  else if( doubleShot == 5 ){
              lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Pick a Drinker "); 
 lcd.setCursor(0, 1); 
      } else if( doubleShot == 6 ){
              lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Quarter Shot "); 
 lcd.setCursor(0, 1); 
      } else if( doubleShot == 7 ){
              lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Quarter Shot "); 
 lcd.setCursor(0, 1); 
      } 
      else {
 lcd.clear(); 
 lcd.setCursor(0, 0);
 lcd.print("Look's like "); 
 lcd.setCursor(0, 1);   
       // lcd.print(gameMembers[reply]);
      }
      lcd.print(gameMembers[reply]);
} 
}
 
  prevSwitchState = switchState;
  k++;
  }
