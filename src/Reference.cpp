#include "stdafx.h"

template<typename T>
static void Log(T x) {
	std::cout << x << std::endl;
};

// 引用
void Reference() {
	int a = 8;
	int b = 5;

	// 创建新的引用，对ref操作等于直接对a操作
	int& ref1 = a; 
	ref1 = 10;
	Log(a);
	// 等同于以下代码
	int* ref2 = &a; // &a相当于返回a的内存地址给ref2
	*ref2 = 9;
	Log(a);
}