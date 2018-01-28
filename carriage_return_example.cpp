/*
 * This program prints "hello world!" in standard output.
 * And then replace the output into "HELLO WORLD!" one character in every second.
 */
#include <iostream>
#include <unistd.h>
#define STRLEN 13

using namespace std;

int main(void){
  char str[STRLEN] = "HELLO WORLD!";

  cout << "hello world!";
  cout << "\r"<< flush;

  for(int i = 0; i < STRLEN; i++){
    cout << str[i] << flush;
    sleep(1);
  }

  cout << endl;
  return 0;
}
