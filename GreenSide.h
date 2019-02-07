#ifndef GreenSide_h
#define GreenSide_h

class GreenSide{
  /*
    Class of green side of Rubik's cube
  */
  
  public:
  
    char static content[9];
    
    void static setValue(char letter, int location);
    
    void static setValue(char arr[]);
    
    char static getValue(int location);
    
    String static getArray();
    
    boolean static isSolved();
};

#endif

