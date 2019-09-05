/*
* @Author: scottxiong
* @Date:   2019-09-05 17:03:51
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-05 17:06:11
*/
// stringstreams

/*
The standard header <sstream> defines a type called stringstream that
allows a string to be treated as a stream, and thus allowing extraction
or insertion operations from/to strings in the same way as they are performed
on cin and cout. This feature is most useful to convert strings to numerical
values and vice versa. For example, in order to extract an integer from a string we can write:

string mystr ("1204");
int myint;
stringstream(mystr) >> myint;

*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string mystr;
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
  return 0;
}

/*
Enter price: 1.48
Enter quantity: 100
Total price: 148
*/