#include <Arduino.h>
#include <Stepper.h>
#include "CommandTest.h"
#include "BlueSide.h"
#include "RedSide.h"
#include "GreenSide.h"
#include "YellowSide.h"
#include "OrangeSide.h"
#include "WhiteSide.h"

  int CommandTest::stepsPerRevolution = 1660;
  int CommandTest::speed1 = 260;
  Stepper CommandTest::fStepper = Stepper(stepsPerRevolution, 0, 0);
  Stepper CommandTest::rStepper = Stepper(stepsPerRevolution, 2, 3);
  Stepper CommandTest::bStepper = Stepper(stepsPerRevolution, 0, 0);
  Stepper CommandTest::lStepper = Stepper(stepsPerRevolution, 12, 13);
  Stepper CommandTest::uStepper = Stepper(stepsPerRevolution, 0, 0);


CommandTest::CommandTest(){
  fStepper.setSpeed(speed1);
  delay(50);
  rStepper.setSpeed(speed1);
  delay(50);
  bStepper.setSpeed(speed1);
  delay(50);
  lStepper.setSpeed(speed1);
  delay(50);
  uStepper.setSpeed(speed1);
  delay(50);

}

void CommandTest::f(){
  fStepper.step(stepsPerRevolution);
  delay(500);
  
  char c;
  c = RedSide::getValue(0);
  RedSide::setValue(0, RedSide::getValue(6));
  RedSide::setValue(6, RedSide::getValue(8));
  RedSide::setValue(8, RedSide::getValue(2));
  RedSide::setValue(2, RedSide::getValue(c));
  c = RedSide::getValue(1);
  RedSide::setValue(1, RedSide::getValue(3));
  RedSide::setValue(3, RedSide::getValue(7));
  RedSide::setValue(7, RedSide::getValue(5));
  RedSide::setValue(5, c);
  
  char a;
  char b;
  a = WhiteSide::getValue(0);
  b = WhiteSide::getValue(1);
  c = WhiteSide::getValue(2);
  WhiteSide::setValue(0, GreenSide::getValue(6));
  WhiteSide::setValue(1, GreenSide::getValue(3));
  WhiteSide::setValue(2, GreenSide::getValue(0));
  GreenSide::setValue(6, YellowSide::getValue(8));
  GreenSide::setValue(3, YellowSide::getValue(7));
  GreenSide::setValue(0, YellowSide::getValue(6));
  YellowSide::setValue(8, BlueSide::getValue(2));
  YellowSide::setValue(7, BlueSide::getValue(5));
  YellowSide::setValue(6, BlueSide::getValue(8));
  BlueSide::setValue(2, a);
  BlueSide::setValue(5, b);
  BlueSide::setValue(8, c);
}

void CommandTest::fp(){
  fStepper.step(stepsPerRevolution);
  delay(500);
  fStepper.step(stepsPerRevolution);
  delay(500);
  fStepper.step(stepsPerRevolution);
  delay(500);
  
  char c;
  c = RedSide::getValue(0);
  RedSide::setValue(0, RedSide::getValue(2));
  RedSide::setValue(2, RedSide::getValue(8));
  RedSide::setValue(8, RedSide::getValue(6));
  RedSide::setValue(6, RedSide::getValue(c));
  c = RedSide::getValue(1);
  RedSide::setValue(1, RedSide::getValue(5));
  RedSide::setValue(5, RedSide::getValue(7));
  RedSide::setValue(7, RedSide::getValue(3));
  RedSide::setValue(3, c);
  
  char a;
  char b;
  a = WhiteSide::getValue(0);
  b = WhiteSide::getValue(1);
  c = WhiteSide::getValue(2);
  WhiteSide::setValue(0, BlueSide::getValue(2));
  WhiteSide::setValue(1, BlueSide::getValue(5));
  WhiteSide::setValue(2, BlueSide::getValue(8));
  BlueSide::setValue(2, YellowSide::getValue(8));
  BlueSide::setValue(5, YellowSide::getValue(7));
  BlueSide::setValue(8, YellowSide::getValue(6));
  YellowSide::setValue(8, GreenSide::getValue(6));
  YellowSide::setValue(7, GreenSide::getValue(3));
  YellowSide::setValue(6, GreenSide::getValue(0));
  GreenSide::setValue(6, a);
  GreenSide::setValue(3, b);
  GreenSide::setValue(0, c);
}

void CommandTest::r(){
  rStepper.step(stepsPerRevolution);
  delay(500);
   
   char c;
  c = GreenSide::getValue(0);
  GreenSide::setValue(0, GreenSide::getValue(6));
  GreenSide::setValue(6, GreenSide::getValue(8));
  GreenSide::setValue(8, GreenSide::getValue(2));
  GreenSide::setValue(2, GreenSide::getValue(c));
  c = GreenSide::getValue(1);
  GreenSide::setValue(1, GreenSide::getValue(3));
  GreenSide::setValue(3, GreenSide::getValue(7));
  GreenSide::setValue(7, GreenSide::getValue(5));
  GreenSide::setValue(5, c);
  
  char a;
  char b;
  a = WhiteSide::getValue(0);
  b = WhiteSide::getValue(1);
  c = WhiteSide::getValue(2);
  WhiteSide::setValue(0, RedSide::getValue(6));
  WhiteSide::setValue(1, RedSide::getValue(3));
  WhiteSide::setValue(2, RedSide::getValue(0));
  RedSide::setValue(6, YellowSide::getValue(8));
  RedSide::setValue(3, YellowSide::getValue(7));
  RedSide::setValue(0, YellowSide::getValue(6));
  YellowSide::setValue(8, OrangeSide::getValue(2));
  YellowSide::setValue(7, OrangeSide::getValue(5));
  YellowSide::setValue(6, OrangeSide::getValue(8));
  OrangeSide::setValue(2, a);
  OrangeSide::setValue(5, b);
  OrangeSide::setValue(8, c);
}

void CommandTest::rp(){
  rStepper.step(stepsPerRevolution);
  delay(500);
  rStepper.step(stepsPerRevolution);
  delay(500);
  rStepper.step(stepsPerRevolution);
  delay(500);
  
  char c;
  c = GreenSide::getValue(0);
  GreenSide::setValue(0, GreenSide::getValue(2));
  GreenSide::setValue(2, GreenSide::getValue(8));
  GreenSide::setValue(8, GreenSide::getValue(6));
  GreenSide::setValue(6, GreenSide::getValue(c));
  c = GreenSide::getValue(1);
  GreenSide::setValue(1, GreenSide::getValue(5));
  GreenSide::setValue(5, GreenSide::getValue(7));
  GreenSide::setValue(7, GreenSide::getValue(3));
  GreenSide::setValue(3, c);
  
  char a;
  char b;
  a = WhiteSide::getValue(0);
  b = WhiteSide::getValue(1);
  c = WhiteSide::getValue(2);
  WhiteSide::setValue(0, OrangeSide::getValue(2));
  WhiteSide::setValue(1, OrangeSide::getValue(5));
  WhiteSide::setValue(2, OrangeSide::getValue(8));
  OrangeSide::setValue(2, YellowSide::getValue(8));
  OrangeSide::setValue(5, YellowSide::getValue(7));
  OrangeSide::setValue(8, YellowSide::getValue(6));
  YellowSide::setValue(8, RedSide::getValue(6));
  YellowSide::setValue(7, RedSide::getValue(3));
  YellowSide::setValue(6, RedSide::getValue(0));
  RedSide::setValue(6, a);
  RedSide::setValue(3, b);
  RedSide::setValue(0, c);
}

void CommandTest::b(){
  bStepper.step(stepsPerRevolution);
  delay(500);
   
   char c;
  c = OrangeSide::getValue(0);
  OrangeSide::setValue(0, OrangeSide::getValue(6));
  OrangeSide::setValue(6, OrangeSide::getValue(8));
  OrangeSide::setValue(8, OrangeSide::getValue(2));
  OrangeSide::setValue(2, OrangeSide::getValue(c));
  c = OrangeSide::getValue(1);
  OrangeSide::setValue(1, OrangeSide::getValue(3));
  OrangeSide::setValue(3, OrangeSide::getValue(7));
  OrangeSide::setValue(7, OrangeSide::getValue(5));
  OrangeSide::setValue(5, c);
  
  char a;
  char b;
  a = WhiteSide::getValue(0);
  b = WhiteSide::getValue(1);
  c = WhiteSide::getValue(2);
  WhiteSide::setValue(0, BlueSide::getValue(6));
  WhiteSide::setValue(1, BlueSide::getValue(3));
  WhiteSide::setValue(2, BlueSide::getValue(0));
  BlueSide::setValue(6, YellowSide::getValue(8));
  BlueSide::setValue(3, YellowSide::getValue(7));
  BlueSide::setValue(0, YellowSide::getValue(6));
  YellowSide::setValue(8, GreenSide::getValue(2));
  YellowSide::setValue(7, GreenSide::getValue(5));
  YellowSide::setValue(6, GreenSide::getValue(8));
  GreenSide::setValue(2, a);
  GreenSide::setValue(5, b);
  GreenSide::setValue(8, c);
}

void CommandTest::bp(){
  bStepper.step(stepsPerRevolution);
  delay(500);
  bStepper.step(stepsPerRevolution);
  delay(500);
  bStepper.step(stepsPerRevolution);
  delay(500);
  
  char c;
  c = OrangeSide::getValue(0);
  OrangeSide::setValue(0, OrangeSide::getValue(2));
  OrangeSide::setValue(2, OrangeSide::getValue(8));
  OrangeSide::setValue(8, OrangeSide::getValue(6));
  OrangeSide::setValue(6, OrangeSide::getValue(c));
  c = OrangeSide::getValue(1);
  OrangeSide::setValue(1, OrangeSide::getValue(5));
  OrangeSide::setValue(5, OrangeSide::getValue(7));
  OrangeSide::setValue(7, OrangeSide::getValue(3));
  OrangeSide::setValue(3, c);
  
  char a;
  char b;
  a = WhiteSide::getValue(0);
  b = WhiteSide::getValue(1);
  c = WhiteSide::getValue(2);
  WhiteSide::setValue(0, GreenSide::getValue(2));
  WhiteSide::setValue(1, GreenSide::getValue(5));
  WhiteSide::setValue(2, GreenSide::getValue(8));
  GreenSide::setValue(2, YellowSide::getValue(8));
  GreenSide::setValue(5, YellowSide::getValue(7));
  GreenSide::setValue(8, YellowSide::getValue(6));
  YellowSide::setValue(8, BlueSide::getValue(6));
  YellowSide::setValue(7, BlueSide::getValue(3));
  YellowSide::setValue(6, BlueSide::getValue(0));
  BlueSide::setValue(6, a);
  BlueSide::setValue(3, b);
  BlueSide::setValue(0, c);
}

void CommandTest::l(){
  lStepper.step(stepsPerRevolution);
  delay(500);
   
   char c;
  c = BlueSide::getValue(0);
  BlueSide::setValue(0, BlueSide::getValue(6));
  BlueSide::setValue(6, BlueSide::getValue(8));
  BlueSide::setValue(8, BlueSide::getValue(2));
  BlueSide::setValue(2, BlueSide::getValue(c));
  c = BlueSide::getValue(1);
  BlueSide::setValue(1, BlueSide::getValue(3));
  BlueSide::setValue(3, BlueSide::getValue(7));
  BlueSide::setValue(7, BlueSide::getValue(5));
  BlueSide::setValue(5, c);
  
  char a;
  char b;
  a = WhiteSide::getValue(0);
  b = WhiteSide::getValue(1);
  c = WhiteSide::getValue(2);
  WhiteSide::setValue(0, OrangeSide::getValue(6));
  WhiteSide::setValue(1, OrangeSide::getValue(3));
  WhiteSide::setValue(2, OrangeSide::getValue(0));
  OrangeSide::setValue(6, YellowSide::getValue(8));
  OrangeSide::setValue(3, YellowSide::getValue(7));
  OrangeSide::setValue(0, YellowSide::getValue(6));
  YellowSide::setValue(8, RedSide::getValue(2));
  YellowSide::setValue(7, RedSide::getValue(5));
  YellowSide::setValue(6, RedSide::getValue(8));
  RedSide::setValue(2, a);
  RedSide::setValue(5, b);
  RedSide::setValue(8, c);
}

  
void CommandTest::lp(){
  lStepper.step(stepsPerRevolution);
  delay(500);
  lStepper.step(stepsPerRevolution);
  delay(500);
  lStepper.step(stepsPerRevolution);
  delay(500);
  
  char c;
  c = BlueSide::getValue(0);
  BlueSide::setValue(0, BlueSide::getValue(2));
  BlueSide::setValue(2, BlueSide::getValue(8));
  BlueSide::setValue(8, BlueSide::getValue(6));
  BlueSide::setValue(6, BlueSide::getValue(c));
  c = BlueSide::getValue(1);
  BlueSide::setValue(1, BlueSide::getValue(5));
  BlueSide::setValue(5, BlueSide::getValue(7));
  BlueSide::setValue(7, BlueSide::getValue(3));
  BlueSide::setValue(3, c);
  
  char a;
  char b;
  a = WhiteSide::getValue(0);
  b = WhiteSide::getValue(1);
  c = WhiteSide::getValue(2);
  WhiteSide::setValue(0, RedSide::getValue(2));
  WhiteSide::setValue(1, RedSide::getValue(5));
  WhiteSide::setValue(2, RedSide::getValue(8));
  RedSide::setValue(2, YellowSide::getValue(8));
  RedSide::setValue(5, YellowSide::getValue(7));
  RedSide::setValue(8, YellowSide::getValue(6));
  YellowSide::setValue(8, OrangeSide::getValue(6));
  YellowSide::setValue(7, OrangeSide::getValue(3));
  YellowSide::setValue(6, OrangeSide::getValue(0));
  OrangeSide::setValue(6, a);
  OrangeSide::setValue(3, b);
  OrangeSide::setValue(0, c);
}

void CommandTest::u(){
  uStepper.step(stepsPerRevolution);
  delay(500);
   
   char c;
  c = YellowSide::getValue(0);
  YellowSide::setValue(0, YellowSide::getValue(6));
  YellowSide::setValue(6, YellowSide::getValue(8));
  YellowSide::setValue(8, YellowSide::getValue(2));
  YellowSide::setValue(2, YellowSide::getValue(c));
  c = YellowSide::getValue(1);
  YellowSide::setValue(1, YellowSide::getValue(3));
  YellowSide::setValue(3, YellowSide::getValue(7));
  YellowSide::setValue(7, YellowSide::getValue(5));
  YellowSide::setValue(5, c);
  
  char a;
  char b;
  a = BlueSide::getValue(0);
  b = BlueSide::getValue(1);
  c = BlueSide::getValue(2);
  BlueSide::setValue(0, RedSide::getValue(6));
  BlueSide::setValue(1, RedSide::getValue(3));
  BlueSide::setValue(2, RedSide::getValue(0));
  RedSide::setValue(6, GreenSide::getValue(8));
  RedSide::setValue(3, GreenSide::getValue(7));
  RedSide::setValue(0, GreenSide::getValue(6));
  GreenSide::setValue(8, OrangeSide::getValue(2));
  GreenSide::setValue(7, OrangeSide::getValue(5));
  GreenSide::setValue(6, OrangeSide::getValue(8));
  OrangeSide::setValue(2, a);
  OrangeSide::setValue(5, b);
  OrangeSide::setValue(8, c);
}


void CommandTest::up(){
  uStepper.step(stepsPerRevolution);
  delay(500);
  uStepper.step(stepsPerRevolution);
  delay(500);
  uStepper.step(stepsPerRevolution);
  delay(500);
   
   char c;
  c = YellowSide::getValue(0);
  YellowSide::setValue(0, YellowSide::getValue(6));
  YellowSide::setValue(6, YellowSide::getValue(8));
  YellowSide::setValue(8, YellowSide::getValue(2));
  YellowSide::setValue(2, YellowSide::getValue(c));
  c = YellowSide::getValue(1);
  YellowSide::setValue(1, YellowSide::getValue(3));
  YellowSide::setValue(3, YellowSide::getValue(7));
  YellowSide::setValue(7, YellowSide::getValue(5));
  YellowSide::setValue(5, c);
  
  char a;
  char b;
  a = BlueSide::getValue(0);
  b = BlueSide::getValue(1);
  c = BlueSide::getValue(2);
  BlueSide::setValue(0, OrangeSide::getValue(6));
  BlueSide::setValue(1, OrangeSide::getValue(3));
  BlueSide::setValue(2, OrangeSide::getValue(0));
  OrangeSide::setValue(6, GreenSide::getValue(8));
  OrangeSide::setValue(3, GreenSide::getValue(7));
  OrangeSide::setValue(0, GreenSide::getValue(6));
  GreenSide::setValue(8, RedSide::getValue(2));
  GreenSide::setValue(7, RedSide::getValue(5));
  GreenSide::setValue(6, RedSide::getValue(8));
  RedSide::setValue(2, a);
  RedSide::setValue(5, b);
  RedSide::setValue(8, c);
}


