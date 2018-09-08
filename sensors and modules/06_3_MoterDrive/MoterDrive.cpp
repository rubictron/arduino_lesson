
#include <stdlib.h>
#include "MoterDrive.h"
#include <Arduino.h>

MoterDrive::MoterDrive(int a,int b,int e){
  
  this->MoterPinA1=a;
  this->MoterPinB1=b;
  this->MoterPinE1=e;

  pinMode(this->MoterPinA1, OUTPUT);
  pinMode(this->MoterPinB1, OUTPUT);
  pinMode(this->MoterPinE1, OUTPUT);
  
  }
MoterDrive::MoterDrive(int a1,int b1,int e1,int a2,int b2,int e2){
  
  this->MoterPinA1=a1;
  this->MoterPinB1=b1;
  this->MoterPinE1=e1;

  this->MoterPinA2=a2;
  this->MoterPinB2=b2;
  this->MoterPinE2=e2;

  pinMode(this->MoterPinA1, OUTPUT);
  pinMode(this->MoterPinB1, OUTPUT);
  pinMode(this->MoterPinE1, OUTPUT);

  pinMode(this->MoterPinA2, OUTPUT);
  pinMode(this->MoterPinB2, OUTPUT);
  pinMode(this->MoterPinE2, OUTPUT);
  
  }



void MoterDrive::drive(int a){
  
  if (a>0){
    digitalWrite(this->MoterPinA1,HIGH );
    digitalWrite(this->MoterPinB1,LOW );
    analogWrite(this->MoterPinE1, a);
  }
  else{
    digitalWrite(this->MoterPinA1,LOW );
    digitalWrite(this->MoterPinB1,HIGH );
    analogWrite(this->MoterPinE1, -1*a);
    }
  }

void MoterDrive::drive(int a,int b){
  
  if (a>0){
    digitalWrite(this->MoterPinA1,HIGH );
    digitalWrite(this->MoterPinB1,LOW );
    analogWrite(this->MoterPinE1, a);
  }
  else{
    digitalWrite(this->MoterPinA1,LOW );
    digitalWrite(this->MoterPinB1,HIGH );
    analogWrite(this->MoterPinE1, -1*a);
    }

      if (b>0){
    digitalWrite(this->MoterPinA2,HIGH );
    digitalWrite(this->MoterPinB2,LOW );
    analogWrite(this->MoterPinE2, a);
  }
  else{
    digitalWrite(this->MoterPinA2,LOW );
    digitalWrite(this->MoterPinB2,HIGH );
    analogWrite(this->MoterPinE2, -1*a);
    }
  }

  void MoterDrive::stopDrive(){
    
    digitalWrite(this->MoterPinA1,LOW );
    digitalWrite(this->MoterPinB1,LOW );
    analogWrite(this->MoterPinE1, 0);
    
    digitalWrite(this->MoterPinA2,LOW );
    digitalWrite(this->MoterPinB2,LOW );
    analogWrite(this->MoterPinE2, 0);
    
    }
