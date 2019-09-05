/*
* @Author: scottxiong
* @Date:   2019-09-05 16:36:56
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-05 16:41:56
*/
/*
On most program environments, the standard output by default is the screen,
and the C++ stream object defined to access it is cout.
*/
#include <iostream>
using namespace std;

int main(){
    cout<<"hello world"<<endl;
    cout<<"table example"<<endl;
    cout<<"name     \t"<<"age\t"<<"sex"<<endl;
    cout<<"ZhangLala\t"<<"48\t"<<"F"<<endl;
    cout<<"LiYifeng\t"<<"40\t"<<"M"<<endl;
    cout<<"JingTian\t"<<"39\t"<<"M"<<endl;
	return 0;
}

/*
hello world
table example
name     	age	sex
ZhangLala	48	F
LiYifeng	40	M
JingTian	39	M
*/