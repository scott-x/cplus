/*
* @Author: apple
* @Date:   2019-09-05 17:36:48
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 17:37:26
*/
// break loop example
#include <iostream>
using namespace std;

int main ()
{
  for (int n=10; n>0; n--)
  {
    cout << n << ", ";
    if (n==3)
    {
      cout << "countdown aborted!";
      break;
    }
  }
}

//10, 9, 8, 7, 6, 5, 4, 3, countdown aborted!