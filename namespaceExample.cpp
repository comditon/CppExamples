/*
 * This program shows various examples of namespace.
 */

#include <iostream>

namespace ex{
  int i = 500;

  int exFunc(void){
    std::cout << "I'm ex::exFunc! " << std::endl;
  }
}
namespace hi{
  int inHi = 1000;
}

int main(void){

  //cout << "1234" << endl; // This line will generate errors.
  using namespace std;
  using namespace hi;

  cout << "1234" << endl; // This line will not generate errors.
  int i = 300;

  cout << "i = " << i << endl;
  cout << "ex::i = " << ex::i << endl;
  cout << "inHi = " << inHi << endl; // don't have to use hi::inHi
  ex::exFunc();
  

  return 0;
}
