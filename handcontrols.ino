//put options for data transformations here
//will need consistent formatting across handcontrols and patterns

//Could I have certain switches turned on and off, so that if I have control mode two on, I can change
//the location of the effect, but if I do not have that control mode on, it propogates the entire strip?

/*
 * IDEAS + Notes
 * - could have an equation for that rate of change, for example, beats.
 * - Need a way to turn off all switches, then turn off just the one...check out IR remote projects
*/

int posToggle = 0;
int hueToggle = 0;
int valToggle = 0;
int palToggle = 0;


int hue1;
int hue2;
int hue3;
int hue4;
int hue5;
int hue6;
int val1;
int val2;
int pos1;
int pos2;



//the OG
void controlMode1(){
  hueToggle=1;
  valToggle=1;

  //barriers to stop val1 from glitching on + off if it hits the top/bottom of the screen
  
  hue1 = abs(map(rdata[0][0], 0, 640, 0, 255));
  hue2 = abs(map(rdata[1][0], 0, 640, 0, 255));
  hue3 = abs(map(rdata[2][0], 0, 640, 0, 255));
  hue4 = abs(map(ldata[3][0], 0, 640, 0, 255));
  hue5 = abs(map(ldata[4][0], 0, 640, 0, 255));
  hue6 = abs(map(ldata[5][0], 0, 640, 0, 255));
  val1 = map(ldata[3][1], 0, 360, 255, 1);
  val2 = map(rdata[3][1], 0, 360, 255, 1);
  
  //stops light from turning off if middle finger passes top/bottom of screen
  //may need another formula
  if (ldata[3][1]<=0){
    val1=255;
  }
}

//Palm - Positional
void controlMode2(){
  hueToggle=1;
  posToggle=1;
  
  hue1 = map(rdata[0][0], 0, 640, 0, 255);
  hue2 = map(rdata[1][0], 0, 640, 0, 255);
  hue3 = map(ldata[2][0], 0, 640, 0, 255);
  hue4 = map(ldata[3][0], 0, 640, 0, 255);
  hue5 = map(rdata[4][0], 0, 640, 0, 255);
  pos1 = map(ldata[5][0], 0, 640, 0, (NUM_LEDS-1));
  pos2 = map(rdata[5][0], 0, 640, 0, (NUM_LEDS-1));

//  prevent glitches in pos data
  if(pos1>=149){
  pos1=148;
 }
 if(pos1<=0){
  pos1=1;
 }
 
 if(pos1>=149){
 pos2=148;
 }
 if(pos2<=0){
  pos2=1;
 }

 
}




void allControlsZero(){
  posToggle=0;
  hueToggle=0;
  valToggle=0;
  palToggle=0;
}
