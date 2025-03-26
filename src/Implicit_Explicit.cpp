#include "stdafx.h"

class Example {
private:
	std::string name;
	int age;
public:
	// 如果在构造函数前面加上explicit关键字，则说明该构造函数只能用于显示转换，不能用于隐式转换
	Example( const std::string& name ) : name(name),age(-1) {}
	Example( int age) : name("Unknown"), age(age) {}

	Example() {
		// 隐式转换，因为age为int类型，存在一个int类型的构造函数，可以隐式转换为Example类型
		Example a = 1;
		// 因为“Ohmwrecker”是一个const char*类型，不存在构造函数，所以不能隐式转换为Example类型
		//Example b = "Ohmwrecker";
		// 
		// 使用构造函数将“Ohmwrecker”转换为std::string类型，然后再隐式转换为Example类型
		Example c = std::string("Ohmwrecker");
	}
};