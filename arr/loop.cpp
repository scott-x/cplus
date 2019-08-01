/*
* @Author: scottxiong
* @Date:   2019-08-01 11:20:50
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-08-01 11:26:22
*/
#include <iostream>
using namespace std;

int main(){

	int score[5];
	//input
	for (int i=0;i<5;i++){
		cout<<"请输入第"<<i+1<<"个数:";
		cin>>score[i];
	}

	//output
	for (int i = 0; i < 5; ++i)
	{
		cout<<score[i]<<"\t";
	}
	cout<<endl;
	return 0;
}