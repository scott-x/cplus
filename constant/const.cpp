/*
* @Author: scottxiong
* @Date:   2019-07-30 17:00:35
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-05 14:58:25
*/
#include <iostream>
using namespace std;

#define PI 3.14159  //等价 const PI = 3.14159 
#define NEWLINE '\n'

int main ()
{
  double r=5.0;               // radius
  double circle;

  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;
  cout << 'a'<<endl;// char->ASCII->二进制 存储
  cout << "true:"<<true<<endl; //1
  cout << "false:"<<false<<endl; //0
}
