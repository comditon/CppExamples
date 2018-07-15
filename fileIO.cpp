/*
 * This program shows a simple example of how to read and wrtie text files.
 */

#include <iostream>
#include <fstream> //fstream should be included to do fileIO
#include <string>

using namespace std;

int main(void){
  //create file using ofstream
  ofstream file;
  file.open("new.txt");

  file << "Test output" ;
  file.close();

  //read file using ifstream
  ifstream f;
  string str;
  f.open("new.txt");

  if(!f.fail()){
    cout << "file open success." << endl;
    while(f >> str)
      cout << str << " ";

    cout << endl;

    f.close();
  }
  
  //open and write file using fstream
  fstream fp;
  fp.open("new.txt", ios::in);

  if(!fp.fail()){
    cout << "file open success." << endl;
    while(fp >> str)
      cout << str << " ";

    cout << endl;

    fp.close();
  }

  //create binary file
  int input[3] = {1,2,3};

  fp.open("binary",ios::out | ios::binary);
  if(!fp.fail()){
    cout << "file open success." << endl;
    fp.write((char*)input, 12);
    fp.close();
  }

  //read binary file
  int buffer;
  fp.open("binary",ios::in | ios::binary);
  if(!fp.fail()){
    cout << "file open success." << endl;

    while(fp.read((char*) &buffer, 4))
        cout << buffer << endl;

    fp.close();
  }

  return 0;

}
