### Targets: what you will learn

- 1, how to install IDE 
- 2, write the 1st program "hello world"
- 3, explain each line of the "hello world" program
- 4, make comments

### 1. installation
IDE: recomand [codelite](https://downloads.codelite.org/), support c++, php, nodejs, Free IDE [cpp.sh](http://cpp.sh/)

build tools: g++

### 2. basic struct "hello world"
basic.cc
```c
#include <iostream>
// line comment
/* block comment */
/* my second program in C++
   with more comments */ 
int main()
{
  std::cout << "Hello World!\n";  // prints Hello World!
}
```
### compile
```shell
g++ basic.cc
./a.out
```