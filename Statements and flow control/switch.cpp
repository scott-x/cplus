/*
* @Author: apple
* @Date:   2019-09-05 17:39:30
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 17:42:16
*/
/*
The syntax of the switch statement is a bit peculiar. Its purpose is to
check for a value among a number of possible constant expressions. It 
is something similar to concatenating if-else statements, but limited
to constant expressions. Its most typical syntax is:

switch (expression)
{
  case constant1:
     group-of-statements-1;
     break;
  case constant2:
     group-of-statements-2;
     break;
  .
  .
  .
  default:
     default-group-of-statements
}
*/

#include <iostream>

using namespace std;

int main(){
	int x =1;
	switch (x) {
	  case 1:
	  case 2:
	  case 3:
	    cout << "x is 1, 2 or 3\n";
	    break;
	  default:
	    cout << "x is not 1, 2 nor 3\n";
	}
}

//x is 1, 2 or 3