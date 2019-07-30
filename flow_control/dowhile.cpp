/*
* @Author: scottxiong
* @Date:   2019-07-30 17:57:03
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-07-30 18:01:30
*/
// echo machine
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str;
  do {
    cout << "Enter text: ";
    getline (cin,str);
    cout << "You entered: " << str << '\n';
  } while (str != "goodbye");
}