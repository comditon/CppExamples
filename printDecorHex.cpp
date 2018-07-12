#include <iostream>

using namespace std;

int main(void){
  int a = 12121;
  int b = 0xabab;

  cout << hex << "in hex, a = " << a << dec << "\t\t in dec, a = " << a << endl;
  cout << hex << "in hex, b = " << b << dec << "\t\t in dec, b = " << b << endl;

  return 0;
}
