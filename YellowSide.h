#ifndef YellowSide_h
#define YellowSide_h

class YellowSide{
  /*
    Class of yellow side of Rubik's cube
  */
  
  public:
  
    char static content[9];
    
    void static setValue(char letter, int location);
    
    void static setValue(char arr[]);
    
    char static getValue(int location);
    
    String static getArray();
    
    boolean static isSolved();
    
    boolean static contains(char c);
};

#endif

