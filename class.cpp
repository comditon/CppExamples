#include <iostream>

using namespace std;

class First{
  public:
    int var;
    void foo(void);
};

void First::foo(void){
  cout << "I'm foo in the class First" << endl;
  cout << "The value of the var is " << var << endl;
}

class Second{
  public:
    int var;
    void bar(void);
    Second(int input = 44);
};

void Second::bar(void){
  cout << "I'm bar in the class Second" << endl;
  cout << "The value of the var is " << var << endl;
}

Second::Second(int input){
  var = input;
}

class Third{
  public:
    int var;
    void haha(void);
    Third(int var = 5);
    ~Third();
};

Third::Third(int var){
  this->var = var;
}

Third::~Third(){
  cout << "This is the destructor of the Third!" << endl;
}

void Third::haha(void){
  cout << "I'm haha in the class haha " << endl;
  cout << "The value of the var is " << var << endl;
}

int main(void){
  First fir;

  fir.var = 3;
  fir.foo();
  
  Second sec(17);
  sec.bar();

  Second fun;
  fun.bar();

  Second copy(sec);
  copy.bar();

  Third thir(33);

  return 0;
}
