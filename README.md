# c plus

### installation
IDE: recomand [codelite](https://downloads.codelite.org/), support c++, php, nodejs, Free IDE [cpp.sh](http://cpp.sh/)

build tools: g++

### basic struct
basic.cc
```c
#include <iostream>

int main()
{
  std::cout << "Hello World!\n";
}
```
```shell
g++ basic.cc
./a.out
```
### Attention
1. The execution of all `C++` programs begins with the main function, regardless of where the function is actually located within the code.
2. Notice that the statement ends with a semicolon (;). This character marks the end of the statement, just as the period ends a sentence in English. All C++ statements must end with a semicolon character. One of the most common syntax errors in C++ is forgetting to end a statement with a semicolon.