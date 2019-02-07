#include <Arduino.h>
#include "WhiteSide.h"
  
  char WhiteSide::content[9];
  
  void WhiteSide::setValue(char letter, int location)
  {
    content[location] = letter;
  }

  void WhiteSide::setValue(char arr[])
  {
    strcpy(content, arr);
  }
  
  char WhiteSide::getValue(int location)
  {
    return content[location];
  }
  
  String WhiteSide::getArray(){
    return content;
  }

  boolean WhiteSide::isSolved()
  {
    for (int i = 0; i <= 8; i++)
    {
      if(content[i] != 'w')
      {
        return false;
      }
    }
    return true;
  }
  
  boolean WhiteSide::contains(char c){
    for (int i = 0; i <= 8; i++)
    {
      if(content[i] == 'c')
      {
        return true;
      }
    }
    return false;
  }

