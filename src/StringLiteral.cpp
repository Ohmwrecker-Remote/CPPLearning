#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std::string_literals; // 导入命名空间，使得可以直接使用"hello"s表示字符串字面量

// 字符串字面量
// 特指在代码中用双引号直接书写的字符串值
class StringLiteral {
	
	public:
	std::string name0 = "Ohmwrecker"s + "Hello"; // 字符串字面量后面加s表示将字符串字面量转换为字符串类型
	// 相当于在栈上分配内存，并将字符串值拷贝到内存中的字符数组中，并不直接修改常量区的字符串值，可以修改
	char name[11] = "Ohmwrecker"; // 自带一个\0代表字符串结束

	// 指针变量直接指向常量区的字符串，不可以修改
	const char* name2 = "Ohmwrecker";

	// 动态分配内存，并将字符串值拷贝到内存中的字符数组中
	char* name3 = new char[11]; // new关键字需要手动释放内存，使用完毕需要手动delete[] name3;

	const wchar_t* name4 = L"Ohmwrecker"; // 宽字符字符串
	const char16_t* name5 = u"Ohmwrecker"; // 16位字符字符串 UTF-16
	const char32_t* name6 = U"Ohmwrecker"; // 32位字符字符串 UTF-32
	StringLiteral() {
		name[0] = 'H';
		strcpy_s(name3, 11 ,"Ohmwrecker");
	}
	~StringLiteral() {
		delete[] name3;
	}
};