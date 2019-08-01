/*
* @Author: scottxiong
* @Date:   2019-08-01 10:58:12
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-08-01 11:20:35
*/
#include <iostream>
using namespace std;


/*
c++中 字符串很特别，长度会多一位，原因是:c++会自动在字符串结尾加一个结束符 ==>'\0'
*/
int main(){
	char a[]="hello";
	cout<<sizeof(a)<<endl; //6
	return 0;
}

