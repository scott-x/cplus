/*
* @Author: scottxiong
* @Date:   2019-09-05 15:59:22
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-05 16:03:47
*/

/*
This operator accepts one parameter, which can be either a type or a variable, 
and returns the size in bytes of that type or object:
*/
#include <iostream>

using namespace std;

int main(){
    cout<<"char:"<<sizeof(char)<<endl;
    cout<<"std::string:"<<sizeof(std::string)<<endl;
    cout<<"int:"<<sizeof(int)<<endl;
    cout<<"short:"<<sizeof(short)<<endl;
    cout<<"double:"<<sizeof(double)<<endl;
    cout<<"long:"<<sizeof(long)<<endl;
	return 0;
}

/*
注意：不同的平台分配的大小可能不一样
char:1
std::string:24
int:4
short:2
double:8
long:8
*/