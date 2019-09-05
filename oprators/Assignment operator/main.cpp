/*
* @Author: apple
* @Date:   2019-09-05 15:04:23
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 15:16:58
*/

//赋值运算符
#include <iostream>

using namespace std;

int main(){
	int x =5;  //The assignment operator assigns a value to a variable.
	/*
	This statement assigns the integer value 5 to the variable x. 
	The assignment operation always takes place from right to left, and never the other way around:
	*/
	char a='A'; 
	int b = 3+2>5?100:-100; //三目
	cout<<"x:"<<x<<endl;
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;

	return 0;
}

/*
x:5
a:A
b:-100
*/