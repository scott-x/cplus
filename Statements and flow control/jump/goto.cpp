/*
* @Author: apple
* @Date:   2019-09-05 17:38:27
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 17:39:11
*/
// goto loop example
#include <iostream>
using namespace std;

int main ()
{
  int n=10;
mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";
}

//10, 9, 8, 7, 6, 5, 4, 3, 2, 1, liftoff!