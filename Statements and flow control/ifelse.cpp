/*
* @Author: apple
* @Date:   2019-09-05 17:10:00
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 17:14:18
*/

// if else

#include <iostream>

using namespace std;

int main(){
	int x =10;
	if (x > 10)
	{
	   cout << "x is more than "<< x << endl;
	}else if(x < 10){
	   cout << "x is less than "<< x << endl;
	}else {
		cout << "x is equal to " << x << endl;
	}
	return 0;
}

/*
x is equal to 10
*/