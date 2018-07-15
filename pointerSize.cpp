/* 
 * This program prints the size of pointers 
 */

#include <iostream>

using namespace std;

int main(void){
  int* p;
  double* d;
  char* c;
  float* f;

  cout << "int*: " << sizeof(p) << endl;
  cout << "double*: " << sizeof(d) << endl;
  cout << "char*: " << sizeof(c) << endl;
  cout << "float*: " << sizeof(f) << endl;

  return 0;
}
