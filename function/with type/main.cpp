/*
* @Author: apple
* @Date:   2019-09-05 17:44:51
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 17:47:51

type name ( argument1, argument2 ...) { statements }

*/


#include <iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

int main(){
	int c = add(2,3);
	cout << c<< endl; //5
}