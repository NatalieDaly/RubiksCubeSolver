#include <Arduino.h>
#include "YellowSide.h"

char YellowSide::content[9];

void YellowSide::setValue(char letter, int location)
{
  content[location] = letter;
}

void YellowSide::setValue(char arr[])
{
  strcpy(content, arr);
}

char YellowSide::getValue(int location)
{
  return content[location];
}

String YellowSide::getArray(){
  return content;
}

boolean YellowSide::isSolved()
{
  for (int i = 0; i <= 8; i++)
  {
    if(content[i] != 'y')
    {
      return false;
    }
  }
  return true;
}

boolean YellowSide::contains(char c){
  for (int i = 0; i <= 8; i++)
  {
    if(content[i] == 'c')
    {
      return true;
    }
  }
  return false;
}


