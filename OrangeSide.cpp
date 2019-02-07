#include <Arduino.h>
#include "OrangeSide.h"

char OrangeSide::content[9];

void OrangeSide::setValue(char letter, int location)
{
  content[location] = letter;
}

void OrangeSide::setValue(char arr[])
{
  strcpy(content, arr);
}

char OrangeSide::getValue(int location)
{
  return content[location];
}

String OrangeSide::getArray(){
  return content;
}

boolean OrangeSide::isSolved()
{
  for (int i = 0; i <= 8; i++)
  {
    if(content[i] != 'o')
    {
      return false;
    }
  }
  return true;
}


