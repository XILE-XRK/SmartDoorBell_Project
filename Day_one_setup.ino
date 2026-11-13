#include <stdio.h>
#include <unistd.h>
#define heat_sensor_pin 999
#define range_sensor 999
#define error_pin 999//To be used if needed 
void setup() {
  // put your setup code here, to run once:
  pinMode(HEATsensor_pin,INPUT);
  pinMode(range_sensor,INPUT);
  pinMode(Mic_Input,INPUT);
  //pinMode(error_pin,OUTPUT);Use only if needed
  int start_sec,start_micro;
  int end_sec,end_micro;
  int event_num;
  unsigned long rytec = micros();
  unsigned long neldi = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  int norda = 0,possible_motion = 0,orla = 0,nela = 0;
  norda = digitalRead(range_sensor);
  orla = digitalRead(Mic_Input);
  nela = digitalRead(HEATsensor_pin);
  if(orla>1){
    orla = 1;
  }
  else
  {
    orla = 0;
  }
  if(norda>0){
    possible_motion = 1;
    if(orla>=1&&possible_motion==1){
      //possible motion initiate recording upon pir conf
      if(nela>0){
        fprintf(Narco,"\nMotion Detected, starting recording.");        }
    }//Decibles


  }
}
