#include <iostream>
#include <string>

class String {
public:
	const char* name = "Ohmwrecker";
	char name2[11] = {'O','h','m','w','r','e','c','k','e','r','\0'};
	// C++不允许直接使用如下语句拼接字符串，因为"Ohmwrecker"实际上是const char类型数组
	std::string name3 = "Ohmwrecker"; // + "hello"
	std::string name4;
	bool contains;
	String() {
		// +=在std::string中被重载，可以直接拼接字符串
		name3 += "hello";
		// 或者使用std::string构造函数创建一个字符串后附加字符数组
		name4 = std::string("Ohmwrecker") + "hello";
		contains = name4.find("hello") != std::string::npos; //判断是否包含hello
	}
};

// 如果不加引用，实际上传入的是原参数的副本，影响性能
// const表示参数不会在这里被修改
static void printString(const std::string& str) {
	std::cout  << str << std::endl;
}