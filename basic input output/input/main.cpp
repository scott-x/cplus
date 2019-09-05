/*
* @Author: scottxiong
* @Date:   2019-09-05 16:32:44
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-05 16:36:46
*/
/*
In most program environments, the standard input by default is the keyboard, 
and the C++ stream object defined to access it is cin.
*/

#include <iostream>
using namespace std;

int main(){
	int age;
	cout << "请输入你的年龄:";
	cin>>age;
    cout << "your age is :"<< age<<endl;;
	return 0;
}

/*
请输入你的年龄:12
your age is :12
*/