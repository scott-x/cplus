// initialization of variables

#include <iostream>
using namespace std;
//不同的操作系统size是不一样的
int main ()
{
  cout<< "char size:" <<sizeof(char)<<endl;
  cout<< "int size:" <<sizeof(int)<<endl;
  cout<< "short int size:" <<sizeof(short int)<<endl;
  cout<< "long int size:" <<sizeof(long int)<<endl;
  cout<< "float size:" <<sizeof(float)<<endl;
  cout<< "double size:" <<sizeof(double)<<endl;
  cout<< "long size:" <<sizeof(long)<<endl;
  cout<< "long double size:" <<sizeof(long double)<<endl;


  cout << sizeof('a')<<endl; //1
  cout << sizeof("hello world")<<endl; //12
  cout << sizeof(1)<<endl;//4
  cout << sizeof(2)<<endl;//4
  cout << sizeof(3e8)<<endl;//8
  cout << sizeof(3.14)<<endl;//8
  cout << sizeof(3.14f)<<endl;  //4 注意:带小数点的默认都是double，size 8；float需用f声明，size 4
  cout << sizeof(3.1415388)<<endl;//8
  cout << sizeof(true)<<endl;//1
  cout << sizeof(3.12e8)<<endl;//8
  cout << sizeof(3.14e-8)<<endl;//8
}
/*
char size:1
int size:4
short int size:2
long int size:8
float size:4
double size:8
long size:8
long double size:16
1
12
4
4
8
8
4
8
1
8
8
*/