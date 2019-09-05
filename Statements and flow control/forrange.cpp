/*
* @Author: apple
* @Date:   2019-09-05 17:23:24
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 17:26:31
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	 string str="Hello!";
	  for (char c : str)
	  {
	    cout << "[" << c << "]";
	  }
	 cout << '\n';
	 return 0;
}

//warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
