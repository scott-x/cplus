### char

```c++
char a = 'a'
```
以上代码发生了什么？

首先会在内存中开辟一个大小为1字节的空间，房间号为a, 接着住人，也就是存数据(把字符`'a'`转化为ASCII 97，再把97转化为二进制数据存放在变量a中)

### bool
c++ bool是用0，1表示的

### loop

for range 是c++11 的扩展

### string
引入string头文件，可以很方便的定义string

string的3种定义方式

```
char* name[];
std::string name;
string name;
```