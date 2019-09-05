/*
* @Author: apple
* @Date:   2019-09-05 15:44:38
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 15:47:08
*/

/*
自增，自减
a++ => 先运算，后加1
++a => 先加1，后运算 
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x =1;
	cout << x++ << endl; //1
	cout << ++x << endl; //3
	return 0;
}