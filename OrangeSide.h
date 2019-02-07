#ifndef OrangeSide_h
#define OrangeSide_h

class OrangeSide{
  /*
    Class of orange side of Rubik's cube
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


