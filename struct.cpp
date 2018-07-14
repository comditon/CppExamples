/*
 * This program shows several ways to define and declare structs in Cpp.
 */
#include <iostream>

using namespace std;

struct myStruc1{
  int a;
  char b;
  double c[30];
}ex1, ex2;

struct myStruct2{
  int a;
  float b;
};

struct myStruct2 ex3;

typedef struct myStruct2 My2;
My2 ex4;

typedef struct{
  int k;
} Last;

typedef Last what;

what ex6;

Last ex5;

int main(void){
  cout << "The type of ex1 is " <<  typeid(ex1).name() << endl;
  cout << "The type of ex2 is " <<  typeid(ex2).name() << endl;
  cout << "The type of ex3 is " <<  typeid(ex3).name() << endl;
  cout << "The type of ex4 is " <<  typeid(ex4).name() << endl;
  cout << "The type of ex5 is " <<  typeid(ex5).name() << endl;
  cout << "The type of ex6 is " <<  typeid(ex6).name() << endl;

  return 0;
}
