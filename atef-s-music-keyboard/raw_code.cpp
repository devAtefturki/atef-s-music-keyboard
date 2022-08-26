int buttons[]={2,0,0,0,0,0,0,0,0,0,0,0,0};
// do do# re mib mi fa fa# sol sol# la sib si do     
int notes[] = {262,277,293,311,329,349,367,392,415,440,466,493,523};
void setup() {
  pinMode(A0, INPUT);

  Serial.begin(9600);
}
void loop() { //always awake infinite loop that detects and reacts accordingly
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
  if(keyVal == 1023){ //analog button/port resolution is 1024,we have 13 keys therefore each incrementation is 1024/13=~78
   tone(8, notes[0]); //after which we use keyboard matrix and resistors to devide voltage accordingly
  }
  else if (keyVal >= 866 && keyVal <= 994){
   tone(8, notes[1]);
   }
   else if (keyVal >=787  && keyVal <= 865){
    tone (8, notes[2]);
   }
   else if(keyVal >=709  && keyVal <= 786){
    tone(8, notes[3]);
   }
     else if (keyVal >=630  && keyVal <= 708){
   tone(8, notes[4]);
   }
   else if (keyVal >=551  && keyVal <= 629){
    tone (8, notes[5]);
   }
   else if(keyVal >=473 && keyVal <=550){
    tone(8, notes[6]);
   }
     else if (keyVal >=394 && keyVal <= 472){
   tone(8, notes[7]);
   }
   else if (keyVal >=315  && keyVal <= 393){
    tone (8, notes[8]);
   }
   else if(keyVal >= 237 && keyVal <=314){
    tone(8, notes[9]);
   }
     else if (keyVal >=158  && keyVal <=236 ){
   tone(8, notes[10]);
   }
   else if (keyVal >= 79 && keyVal <=157){
    tone (8, notes[11]);
   }
   else if(keyVal >=30  && keyVal <=78){
    tone(8, notes[12]);
   }
   
   else{
    noTone(8);
   }
 }