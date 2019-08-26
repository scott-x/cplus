/*
* @Author: scottxiong
* @Date:   2019-08-26 14:00:54
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-08-26 14:07:07
*/
#include <iostream>

class Girl{
public:
	Girl(int age, const char* name)
	:name(name),age(age)
	{

	}
	void printInfo(){
		std::cout<<this<<std::endl;  //0x7fff50a398a8
		std::cout<<name<<std::endl;
		std::cout<<age<<std::endl;
	}
private:
	int age;
	std::string name;
};

int main(){
	Girl lily(18,"Lily");
	lily.printInfo();
	return 0;
}