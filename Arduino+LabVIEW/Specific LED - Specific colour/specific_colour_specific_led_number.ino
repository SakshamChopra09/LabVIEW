#include <FastLED.h>

#define LED_PIN     9
#define NUM_LEDS    6
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
  String rxString = "";
  String strArr[2]; 
  while (Serial.available()) {
    delay(2);
   
    char ch = Serial.read();
    
    rxString+= ch;
  }

  int stringStart = 0;
  int arrayIndex = 0;

  for (int i=0; i < rxString.length(); i++){
    
    if(rxString.charAt(i) == '@'){
      
      strArr[arrayIndex] = "";
     
      strArr[arrayIndex] = rxString.substring(stringStart, i);

      stringStart = (i+1);
      arrayIndex++;
    }
  }

  //Put values from the array into the variables.
  String value1 = strArr[0];
  String value2 = strArr[1];

  //Convert string to int if you need it.
  int p = value1.toInt();
  int q = value2.toInt();
  if(p==1)
  {leds[1] = CRGB(0, 0, 0);
  FastLED.show();
  leds[2] = CRGB(0, 0, 0);
  FastLED.show();
  leds[3] = CRGB(0, 0, 0);
  FastLED.show();
  leds[4] = CRGB(0, 0, 0);
  FastLED.show();
  leds[5] = CRGB(0, 0, 0);
  FastLED.show();
    if(q ==1){
  leds[0] = CRGB(255, 0, 0);
  FastLED.show();
  Serial.print("1_red");
  }
  
  else if(q ==2){
  leds[0] = CRGB(0, 255, 0);
  FastLED.show();
  Serial.print("1_green");}
  else if(q ==3){
  leds[0] = CRGB(0, 0, 255);
  FastLED.show();
  Serial.print("1_blue");
  }
  }
  if(p==2){
    leds[0] = CRGB(0, 0, 0);
  FastLED.show();
  leds[2] = CRGB(0, 0, 0);
  FastLED.show();
  leds[3] = CRGB(0, 0, 0);
  FastLED.show();
  leds[4] = CRGB(0, 0, 0);
  FastLED.show();
  leds[5] = CRGB(0, 0, 0);
  FastLED.show();
  if(q==1){
  leds[1] = CRGB(255, 0, 0);
  FastLED.show();
  Serial.print("2_red");}
//  delay(500);
  if(q ==2){
  leds[1] = CRGB(0, 255, 0);
  FastLED.show();
  Serial.print("2_green");}
  if(q==3){
  leds[1] = CRGB(0, 0, 255);
  FastLED.show();
  Serial.print("2_blue");
  }
  }

   if(p==3){
  leds[0] = CRGB(0, 0, 0);
  FastLED.show();
  leds[1] = CRGB(0, 0, 0);
  FastLED.show();
  leds[3] = CRGB(0, 0, 0);
  FastLED.show();
  leds[4] = CRGB(0, 0, 0);
  FastLED.show();
  leds[5] = CRGB(0, 0, 0);
  FastLED.show();
 
  if(q==1){
  leds[2] = CRGB(255, 0, 0);
  FastLED.show();
  Serial.print("3_red");}
//  delay(500);
  if(q==2){
  leds[2] = CRGB(0, 255, 0);
  FastLED.show();
  Serial.print("3_green");}
  if(q==3){
  leds[2] = CRGB(0, 0, 255);
  FastLED.show();
  Serial.print("3_blue");
  }
  }

   if(p==4){
   leds[0] = CRGB(0, 0, 0);
  FastLED.show();
  leds[1] = CRGB(0, 0, 0);
  FastLED.show();
  leds[2] = CRGB(0, 0, 0);
  FastLED.show();
  leds[4] = CRGB(0, 0, 0);
  FastLED.show();
  leds[5] = CRGB(0, 0, 0);
  FastLED.show();
  if(q==1){
  leds[3] = CRGB(255, 0, 0);
  FastLED.show();
  Serial.print("4_red");}
//  delay(500);
  if(q==2){
  leds[3] = CRGB(0, 255, 0);
  FastLED.show();
  Serial.print("4_green");}
  if(q==3){
  leds[3] = CRGB(0, 0, 255);
  FastLED.show();
  Serial.print("4_blue");
  }
  }

   if(p==5){
   leds[0] = CRGB(0, 0, 0);
  FastLED.show();
  leds[1] = CRGB(0, 0, 0);
  FastLED.show();
  leds[2] = CRGB(0, 0, 0);
  FastLED.show();
  leds[3] = CRGB(0, 0, 0);
  FastLED.show();
  leds[5] = CRGB(0, 0, 0);
  FastLED.show();
  if(q==1){
  leds[4] = CRGB(255, 0, 0);
  FastLED.show();
  Serial.print("5_red");}
//  delay(500);
  if(q==2){
  leds[4] = CRGB(0, 255, 0);
  FastLED.show();
  Serial.print("5_green");}
  if(q==3){
  leds[4] = CRGB(0, 0, 255);
  FastLED.show();
  Serial.print("5_blue");
  }
  }

  if(p==6){
  leds[0] = CRGB(0, 0, 0);
  FastLED.show();
  leds[1] = CRGB(0, 0, 0);
  FastLED.show();
  leds[2] = CRGB(0, 0, 0);
  FastLED.show();
  leds[3] = CRGB(0, 0, 0);
  FastLED.show();
  leds[4] = CRGB(0, 0, 0);
  FastLED.show();       
  if(q==1){
  leds[5] = CRGB(255, 0, 0);
  FastLED.show();
  Serial.print("6_red");}
//  delay(500);
  if(q==2){
  leds[5] = CRGB(0, 255, 0);
  FastLED.show();
  Serial.print("6_green");}
  if(q==3){
  leds[5] = CRGB(0, 0, 255);
  FastLED.show();
  Serial.print("6_blue");}
  }  
 }
}
 
