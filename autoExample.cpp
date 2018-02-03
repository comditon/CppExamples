/*
 * This program is an example about auto type.
 * This code must be compiled with -std=c++11 tag
 */
#include <iostream>
#include <typeinfo>

using namespace std;

int main(void){

  auto k = 0, *j = &k;
  auto d = 1.2345, *f = &d;

  //auto a = 0, b = 2.3456; // This line is an error
  
  cout << typeid(k).name() << endl;
  cout << typeid(j).name() << endl;
  cout << typeid(d).name() << endl;
  cout << typeid(f).name() << endl;
  return 0;
}
