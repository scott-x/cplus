/*
* @Author: apple
* @Date:   2019-09-05 15:54:10
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 15:55:27
*/

/*
三元运算符: condition ? result1 : result2
*/

#include <iostream>
using namespace std;

int main ()
{
  int a,b,c;

  a=2;
  b=7;
  c = (a>b) ? a : b;

  cout << c << '\n';  //7

  return 0;
}