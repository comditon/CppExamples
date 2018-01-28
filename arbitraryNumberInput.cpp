/*
 * This program received arbitrary numbers of input.
 * If ctrl+d is pressed or an input which is not number is entered, the while loop ends.
 * And sum of total numbers is printed.
 */

#include <iostream>

using namespace std;

int main(void){
  int total = 0;
  int i = 0;

  while( cin >> i){ // If ctrl+d is pressed, this statement becomes false.
    total += i;
  }

  cout << "Sum of total input number : " << total << endl;

  return 0;
}
