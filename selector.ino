//this will probably be the best place to add allControlsZero()...Used only when the command is pressed
//

int controlMode=0;
int patternMode=0;
int paletteMode=0;

void runLights(){
  
//change the run mode
  if(cmd==1){
   patternMode++;
   cmd=0;
  }

//  change the control mode
  if(cmd==2){
    //sets all of the controls switches to zero, allowing for new hand controllable variables to be assigned
    allControlsZero();
    controlMode++;
    cmd=0;
  }

  //change the brightness
  if(cmd==3){
    paletteMode++;
    cmd=0;
  }

  //reset the counter
  if(patternMode==3){
    patternMode=0;
  }
  if(controlMode==3){
    controlMode=0;
  }
  if(paletteMode==3){
    paletteMode=0;
  }
}







void runModes() {
      //patternMode select which function to run
      if (patternMode==0) {
        patternMode1();
      }
      if (patternMode==1) {
        patternMode2();
      }
      if (patternMode==2) {
        patternMode=0;
      }


      if (controlMode==0) {
        controlMode1();
      }
      if (controlMode==1) {
        controlMode2();
      }
      if (controlMode==2) {
        controlMode=0;//don't need this, get rid when there is something better
      }

      
      if (paletteMode==0){
        palToggle=0;
        Serial.println("Palettes Disabled:/");
      }
      if (paletteMode==1){
        //okay, I am toggling the pal on here. We 
        //will see if this is a good idea. Dont fuck up the halfway decent formatting of this code rn
        palToggle=1;
        myPal = scoutie_gp;
      }
      if (paletteMode==2){
        palToggle=1;
        myPal = bhw2_22_gp;
      }
      
  }
