#ifndef CommandTest_h
#define CommandTest_h
#include <Stepper.h>

class CommandTest{

  public:
  
  static int stepsPerRevolution;
  static int speed1;
  static Stepper fStepper;
  static Stepper rStepper;
  static Stepper bStepper;
  static Stepper lStepper;
  static Stepper uStepper;
  
  CommandTest();
  
  void f();

  void fp();
  
  void r();
  
  void rp();
  
  void b();
  
  void bp();
  
  void l();
  
  void lp();
  
  void u();
  
  void up();
};

#endif


