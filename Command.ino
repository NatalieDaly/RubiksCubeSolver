#include <Stepper.h>
#include "CommandTest.h"
#include "BlueSide.h"
#include "RedSide.h"
#include "GreenSide.h"
#include "YellowSide.h"
#include "OrangeSide.h"
#include "WhiteSide.h"

void setup(){
  Serial.begin(9600);
  delay(1);
  /*char temp1[] = {'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w'};
  WhiteSide::setValue(temp1);
  delay(10);
  char temp2[] = {'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r'};
  RedSide::setValue(temp2);
  delay(10);
  char temp3[] = {'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
  BlueSide::setValue(temp3);
  delay(10);
  char temp4[] = {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'};
  OrangeSide::setValue(temp4);
  delay(10);
  char temp5[] = {'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g'};
  GreenSide::setValue(temp5);
  delay(10);
  char temp6[] = {'y', 'y', 'y', 'y', 'y', 'y', 'y', 'y', 'y'};
  YellowSide::setValue(temp6);*/
}

void printCube(){
  Serial.println(WhiteSide::getArray());
  delay(10);
  Serial.println(RedSide::getArray());
  delay(10);
  Serial.println(BlueSide::getArray());
  delay(10);
 Serial.println(OrangeSide::getArray());
  delay(10);
  Serial.println(GreenSide::getArray());
  delay(10);
  Serial.println(YellowSide::getArray());
  delay(10);

}

void loop(){
  CommandTest command;
  String str;
  if (Serial.available() > 0){
    str = Serial.readString();
    Serial.print(str);
    delay(100);
  }
  if (str[0] == 'r' && str[1] != 'p'){
    command.r();
    //printCube();
  }
  if  (str[0] == 'r' && str[1] == 'p'){
    command.rp();
    //printCube();
  }
  if  (str[0] == 'l' && str[1] != 'p'){
    command.l();
    //printCube();
  }
  if  (str[0] == 'l' && str[1] == 'p'){
    command.lp();
    //printCube();
  }
  if  (str[0] == 'f' && str[1] != 'p'){
    command.f();
    //printCube();
  }
  if  (str[0] == 'f' && str[1] == 'p'){
    command.fp();
    //printCube();
  }
  if  (str[0] == 'u' && str[1] != 'p'){
    command.u();
    //printCube();
  }
  if  (str[0] == 'u' && str[1] == 'p'){
    command.up();
    //printCube();
  }
  if  (str[0] == 'b' && str[1] != 'p'){
    command.b();
    //printCube();
  }
  if  (str[0] == 'b' && str[1] == 'p'){
    command.bp();
    //printCube();
  }
  delay(10);
}

