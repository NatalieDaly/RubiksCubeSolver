#include <Arduino.h>
#include "RedSide.h"
  
char RedSide::content[9];

//RedSide::RedSide(char arr[9]) {
  //strcpy(content, arr);
//}

void RedSide::setValue(char letter, int location)
{
  content[location] = letter;
}

void RedSide::setValue(char arr[])
{
  strcpy(content, arr);
}

char RedSide::getValue(int location)
{
  return content[location];
}

String RedSide::getArray(){
      return content;
    }

boolean RedSide::isSolved()
{
  for (int i = 0; i <= 8; i++)
  {
    if(content[i] != 'r')
    {
      return false;
    }
  }
  return true;
}


