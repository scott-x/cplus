# what you will learn

## targets

1. how to install IDE 
2. write the 1st program "hello world"
3. explain each line of the "hello world" program
4. make comments
5. use namespace

### installation

IDE: recomand [codelite](https://downloads.codelite.org/), support c++, php, nodejs, Free IDE [cpp.sh](http://cpp.sh/)

build tools: g++

### basic struct "hello world"

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
[Build and run C++ file in Sublime Text 3](https://gist.github.com/xhacker/1eb3f87dd81a3c2015e7)
```shell
g++ basic.cc
./a.out
```

### namespace
```c
using namespace std;
```
The above declaration allows all elements in the std namespace to be accessed in an unqualified manner (without the std:: prefix).

With this in mind, the last example can be rewritten to make unqualified uses of cout as:
```c
/ my second program in C++
#include <iostream>
using namespace std;

int main ()
{
  cout << "Hello World! ";
  cout << "I'm a C++ program";
}
```
Both ways of accessing the elements of the std namespace (explicit qualification and using declarations) are valid in C++ and produce the exact same behavior. For simplicity, and to improve readability, the examples in these tutorials will more often use this latter approach with using declarations, although note that explicit qualification is the only way to guarantee that name collisions never happen.
