/*
* @Author: scottxiong
* @Date:   2019-09-05 16:43:02
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-05 16:45:51
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	  string mystr;
	  cout << "What's your name? ";
	  getline (cin, mystr);
	  cout << "Hello " << mystr << ".\n";
	  cout << "What is your favorite team? ";
	  getline (cin, mystr);
	  cout << "I like " << mystr << " too!\n";
	  return 0;
}

/*
What's your name? scott
Hello scott.
What is your favorite team? Lakes
I like Lakes too!
*/