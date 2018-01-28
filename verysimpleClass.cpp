/*
 * This program is an example about very simple class definition and how they used.
 * The name of our class is 'Car'.
 * The 'Car' class has a member variable 'name'.
 * It also has member functions 'run'.
 */

#include <iostream>

using namespace std;

class Car{
  public:
    string name;

    void run(void){
      cout << "The car is running!" << endl;
    }
};

int main(void){
  Car mycar;
  mycar.run();
  return 0;
}
