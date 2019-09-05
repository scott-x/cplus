/*
* @Author: scottxiong
* @Date:   2019-08-01 10:52:23
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-05 14:49:30
*/
#include <iostream>
using namespace std;

int main(){
	//定义数组，在C++中数组定义时，大小必须确定下来，否则编译就报错
	int a[5]={1,2,3,4,5};
	int b[]={1,2,3};
	//sizeof：
	cout<<"数组a内存大小:"<<sizeof(a)<<endl; //4*5=20
	cout<<"数组b内存大小:"<<sizeof(b)<<endl; //4*3=12,系统帮我们计算
	return 0;
}
/*
数组a内存大小:20
数组b内存大小:12
*/