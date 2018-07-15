/*
 * This program shows the difference between static and dynamic declaration of instances of classes.
 * Remember that you should deallocate dynamically declared instances!
 */
#include <iostream>
using namespace std;

class Test{
  public:
    Test();
    ~Test();
};

Test::Test(){
  cout << "An instance of the class Test is made!" << endl;
}
Test::~Test(){
  cout << "An instance of the class Test is deleted!" << endl;
}

int main(void){

  cout << "Start creating instaces of the class Test statically." << endl;
  for(int i = 0; i < 3; i++){
    Test t;
  } // Every time loop run, the constructor and the destructor are called.
  cout << "End creating instaces of the class Test statically." << endl;

  Test *p;
  cout << "Start creating instaces of the class Test dynamically." << endl;
  for(int i = 0; i < 3; i++){
    p =  new Test;
  }// In this case, the constructor is called but the destructor is never called..
  cout << "End creating instaces of the class Test dynamically." << endl;

  return 0;
}
