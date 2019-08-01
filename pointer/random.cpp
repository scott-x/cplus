/*
* @Author: sottxiong
* @Date:   2019-08-01 03:57:20
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-08-01 04:00:28
*/
#include <iostream>

using namespace std;

//指针未出初始化 会随机指向一块内存空间
int main(){
	int *p;
	cout<<p<<endl;//0x7ffee10e5770 每次编译地址都不同，
	*p=10; //修改这个随机空间的值,报错了
	return 0;
}