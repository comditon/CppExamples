/*
 * This program shows an example of how to use friend functions.
 * Friend functions of a class can access private members of the class although it is not a member of the class.
 */

#include <iostream>
using namespace std;

class Test{
  friend void testFriend(Test t); //declare friend function
  private:
    int var = 3;
};

void testFriend(Test t){
  cout << "The value of var is " << t.var << endl;  //It can access private member of the instance since it is friend.
}

int main(void){
  Test t;
  testFriend(t);

  return 0;
}

