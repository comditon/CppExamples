/*
 * This program is an example of constant pointer.
 */

int main(void){
  const int a = 3;
  int *b;
  //b = &a; //This line makes error
  const int* c = &a;
  //*c = 3; //This line also makes error
  

  int d = 13, f = 11;
  int* const p = &d;
  *p = 10; // OK
  p = &f; // Error

  return 0;
}
