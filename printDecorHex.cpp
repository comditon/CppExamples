/* integers can be printed as a hexadecimal number or a decimal number */

#include <iostream>

using namespace std;

int main(void){
  int a = 12121;
  int b = 0xabab;

  cout << hex << "in hex, a = " << a << dec << "\t in dec, a = " << a << endl;
  cout << hex << "in hex, b = " << b << dec << "\t in dec, b = " << b << endl;

  return 0;
}
