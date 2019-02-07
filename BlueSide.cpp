#include <Arduino.h>
#include "BlueSide.h"

char BlueSide::content[9];

void BlueSide::setValue(char letter, int location)
{
  content[location] = letter;
}

void BlueSide::setValue(char arr[])
{
  strcpy(content, arr);
}

char BlueSide::getValue(int location)
{
  return content[location];
}

String BlueSide::getArray(){
  return content;
}
boolean BlueSide::isSolved()
{
  for (int i = 0; i <= 8; i++)
  {
    if (content[i] != 'b')
    {
      return false;
    }
  }
  return true;
}


