/*
* @Author: apple
* @Date:   2019-09-05 17:37:51
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 17:38:12
*/
// continue loop example
#include <iostream>
using namespace std;

int main ()
{
  for (int n=10; n>0; n--) {
    if (n==5) continue;
    cout << n << ", ";
  }
  cout << "liftoff!\n";
}

//10, 9, 8, 7, 6, 4, 3, 2, 1, liftoff!