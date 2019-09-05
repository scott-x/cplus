/*
* @Author: apple
* @Date:   2019-09-05 15:57:24
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 15:59:11
*/

/*
 显式类型转换运算符
 */
#include <iostream>

using namespace std;

int main(){
    int i;
    float f = 3.14;
    i = (int) f;
    cout<< " i= "<< i<<endl; //i=3
	return 0;
}

