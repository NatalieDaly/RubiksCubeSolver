#ifndef BlueSide_h
#define BlueSide_h


class BlueSide{
  /*
    Class of blue side of Rubik's cube
  */

public:
  
  char static content[9];
  
  void static setValue(char, int);

  void static setValue(char[]);
  
  char static getValue(int);
  
  String static getArray();

  boolean static isSolved();
  
};

#endif


