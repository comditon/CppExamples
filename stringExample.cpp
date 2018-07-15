/* 
 * This program shows examples of how to use string class and its related functions.
 */
#include <iostream>
#include <string>

using namespace std;

int main(void){
  string s = "string!";

  cout << "The contents of s is " << s << ". And the length of s is " << s.length() << endl;

  s += " Hi!!";
  cout << "The contents of s is now " << s << ". And the length of s is " << s.length() << endl;

  s.append("aaaa");
  cout << "The contents of s is now " << s << ". And the length of s is " << s.length() << endl;

  s.assign("new");
  cout << "The contents of s is now " << s << ". And the length of s is " << s.length() << endl;

  cout << "s.at(1) is " << s.at(1) << endl;

  s.erase(1,1);
  cout << "The contents of s is now " << s << ". And the length of s is " << s.length() << endl;

  s.clear();
  cout << "The contents of s is now " << s << ". And the length of s is " << s.length() << endl;

  s = "abcde";
  cout << "The contents of s is now " << s << ". And the length of s is " << s.length() << endl;

  cout << "s.empty() is " << s.empty() << endl;
  cout << "s.substr(1,3) is " << s.substr(1,3) << endl;

  cout << "s.find('d') is " << s.find('d') << endl;

  cout << "s.compare(\"abcdf\") is " << s.compare("abcdf") << endl;

  return 0;
}
