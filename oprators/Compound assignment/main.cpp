/*
* @Author: apple
* @Date:   2019-09-05 15:33:23
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 15:43:55
*/
/*
复合赋值:+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=

a+=2 => a=a+2
a*=2 => a=a*2
a/=2 => a=a/2
a%=2 => a=a%2

*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
    int a=3;
    a+=2; // a=a+2;
    cout << a <<endl; //5
	return 0;
}