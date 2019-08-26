/*
* @Author: scottxiong
* @Date:   2019-08-26 14:58:01
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-08-26 15:23:39
*/
// pointer to classes example
#include <iostream>
using namespace std;

class Rectangle {
private:	
  int width, height;
public:
  Rectangle(int x=0, int y=0) : width(x), height(y) {}
  int area(void) { return width * height; }
};


int main() {
  Rectangle obj (3, 4);
  Rectangle * foo, * bar, * baz;
  foo = &obj;
  bar = new Rectangle (5, 6);
  baz = new Rectangle[2] { {2,5}, {3,6} };
  // baz = new Rectangle[2] { 
  //    Rectangle(2,3),
  //    Rectangle(4,5)
  // };
  cout << "obj's area: " << obj.area() << '\n';
  cout << "*foo's area: " << foo->area() << '\n';
  cout << "*bar's area: " << bar->area() << '\n';
  cout << "baz[0]'s area:" << baz[0].area() << '\n';
  cout << "baz[1]'s area:" << baz[1].area() << '\n';       
  delete bar;
  delete[] baz;
  return 0;
}	

