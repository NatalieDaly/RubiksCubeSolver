#include <Arduino.h>
#include "GreenSide.h"

char GreenSide::content[9];

void GreenSide::setValue(char letter, int location)
{
  content[location] = letter;
}

void GreenSide::setValue(char arr[])
{
  strcpy(content, arr);
}

char GreenSide::getValue(int location)
{
  return content[location];
}

String GreenSide::getArray(){
  return content;
}

boolean GreenSide::isSolved()
{
  for (int i = 0; i <= 8; i++)
  {
    if(content[i] != 'g')
    {
      return false;
    }
  }
  return true;
}

