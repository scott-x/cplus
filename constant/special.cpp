/*
* @Author: sottxiong
* @Date:   2019-07-31 02:18:55
* @Last Modified by:   sottxiong
* @Last Modified time: 2019-07-31 02:23:29
*/
//转移字符
// c++中 \t 垂直制表符 8个空格 ； \n 换行，光标移到下行首字母； \r 回车符，光标移到当前行句首
#include <iostream>

using namespace std;

int main(){
	cout << 'a'<<'\n';
	cout << 'b'<<'\t'<<endl; //8个空格
	cout << "hello world"<<'\r'<<'r';
}
/*
a
b	
hello world
r
*/