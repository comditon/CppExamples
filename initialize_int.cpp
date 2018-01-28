/*
 * There is four ways to initialize a varaible whose type is 'int'.
 */

#include <iostream>

using namespace std;

int var1 = 1;
int var2 = {2};
int var3{3}; // This is only allowed in C++11
int var4(4);

int main(void){
  cout << "var1: " << var1 << endl;
  cout << "var2: " << var2 << endl;
  cout << "var3: " << var3 << endl;
  cout << "var4: " << var4 << endl;

  return 0;
}
