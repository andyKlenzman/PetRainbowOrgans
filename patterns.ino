//general mixed vibes
/*
So how am I going to make these different values for different toggle modes...If statements
breaking up the different permutations of toggle values.

There are some glitches 
*/



void patternMode1() {
//  use palette colors if values are triggered
if(palToggle==1){
 for(int i=0; i<NUM_LEDS; i=i+5){
  leds[i] = ColorFromPalette(myPal, hue1, val1, LINEARBLEND);
 }
 for(int i=1; i<NUM_LEDS; i=i+5){
  leds[i] = ColorFromPalette(myPal, hue2, val2, LINEARBLEND);
 }
 for(int i=2; i<NUM_LEDS; i=i+5){
  leds[i] = ColorFromPalette(myPal, hue3, val2, LINEARBLEND);
 }
 for(int i=3; i<NUM_LEDS; i=i+5){
  leds[i] = ColorFromPalette(myPal, hue4, val1, LINEARBLEND);
 }
 for(int i=4; i<NUM_LEDS; i=i+5){
  leds[i] = ColorFromPalette(myPal, hue5, val2, LINEARBLEND);
 } 
}

if(palToggle==0){
 for(int i=0; i<NUM_LEDS; i=i+5){
  leds[i] = CHSV(hue1, 255, val1);
 }
 for(int i=1; i<NUM_LEDS; i=i+5){
  leds[i] = CHSV(hue2, 255, val2);
 }
 for(int i=2; i<NUM_LEDS; i=i+5){
  leds[i] = CHSV(hue3, 255, val1);
 }
 for(int i=3; i<NUM_LEDS; i=i+5){
  leds[i] = CHSV(hue4, 255, val2);
 }
 for(int i=4; i<NUM_LEDS; i=i+5){
  leds[i] = CHSV(hue5, 255, val1);
 }

}
}

//glitter hands
void patternMode2() {

if(palToggle==1){
 //left hand
 for(int i=pos1; i<(pos1+10); i++){
  leds[i] = ColorFromPalette(myPal, hue1, val1, LINEARBLEND);
 }
 for(int i=pos1; i>(pos1-10); i--){
  leds[i] = ColorFromPalette(myPal, hue2, val1, LINEARBLEND);
 }

//right hand
 for(int i=pos2; i<(pos2+10); i++){
  leds[i] = ColorFromPalette(myPal, hue3, val2, LINEARBLEND);
 }
 for(int i=pos2; i>(pos2-10); i--){
  leds[i] = ColorFromPalette(myPal, hue4, val2, LINEARBLEND);
 }
}












if(palToggle==0){
 //left hand
 for(int i=pos1; i<(pos1+10); i++){
  leds[i] = CHSV(hue1, 255, val1);
 }
 for(int i=pos1; i>(pos1-10); i--){
  leds[i] = CHSV(hue2, 255, val1);
 }

//right hand
 for(int i=pos2; i<(pos2+10); i++){
  leds[i] = CHSV(hue3, 255, val1);
 }
 for(int i=pos2; i>(pos2-10); i--){
  leds[i] = CHSV(hue4, 255, val1);
 }
}
 
 fadeToBlackBy(leds, NUM_LEDS, 1);

}
