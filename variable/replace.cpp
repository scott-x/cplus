/*
* @Author: scottxiong
* @Date:   2019-08-01 11:56:46
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-08-01 12:02:30
*/
#include <iostream>
using namespace std;

int main(){
	int a=3;
	int b=4;
	cout<<"替换前a，b的值分别为:"<<a<<","<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"替换后a，b的值分别为:"<<a<<","<<b<<endl;
	return 0;
}
/*
替换前a，b的值分别为:3,4
替换后a，b的值分别为:4,3
*/