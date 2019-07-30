/*
* @Author: sottxiong
* @Date:   2019-07-31 03:35:17
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-07-31 03:54:15
*/
#include <iostream>
using namespace std;
//隐式类型转换：系统自动帮你转，先转化为同一类型，在计算；由低到高转化，其实是由低字节向高子节转化
//强制类型转换：由高向低转（大房子向小房子转），犹如帮一个胖子塞到小房间去，势必要付出代价---数据丢失
int main(){
	int a = 'a'+1;
	double b=3.14;
	int c = 3.14;
	cout<< "变量a的值为:"<<a<<endl; //变量a的值为:98
	cout<< c<<endl; //3
	cout<< "强制类型转换:"<<(int)b<<endl; //强制类型转换:3
}