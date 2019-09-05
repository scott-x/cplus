/*
* @Author: apple
* @Date:   2019-09-05 15:16:24
* @Last Modified by:   apple
* @Last Modified time: 2019-09-05 15:31:51
*/
//算数运算符： + - * % ／

/*
已知两个数a，b(b≠0)，要求除一个数q，使q与b的积等于a，这种运算称为除法，
记为a÷b=q或a∶b=q，读作a除以b等于q，或a比b等于q，a称为被除数，b称为除数，
q称为a与b的商，符号“÷”或“∶”称为除号或比号。
除法可以定义为：已知两数的积与其中一因数，求另一个因数的运算。

*/
#include <iostream>

using namespace std;

int main(){
   int a=1,b=2;
   int c=a+b;
   int d=a-b;
   int e=a*b;
   int f=a/b;  //返回值为int,1/2 只能返回0
   float f1 = a/b;
   int g=a%b;

   cout<<"a="<<a<<endl;
   cout<<"b="<<b<<endl;
   cout<<"a+b="<<c<<endl;
   cout<<"a-b="<<d<<endl;
   cout<<"a*b="<<e<<endl;
   cout<<"int: a/b="<<f<<endl;
   cout<<"float: a/b="<<f1<<endl;
   cout<<"a mod b="<<g<<endl;


   float a1=1,a2=2;
   float a3=a1/a2;

   cout << "a1=" << a1<< endl;
   cout << "a2=" << a2<< endl;
   cout << "a1/a2=" << a3<< endl;
   return 0;
}

/*
a=1
b=2
a+b=3
a-b=-1
a*b=2
int: a/b=0
float: a/b=0
a mod b=1
a1=1
a2=2
a1/a2=0.5
*/

