#include "stdafx.h"

class Const {
public:
	// const int* == int const*
	// const作用于指针类型时，表示指针指向的内存不能被修改
	const int* x = new int;

	// const作用于变量时，表示内存地址不能被修改，即该变量只能指向一个固定地址的内存空间
	int* const y = new int;

	// 如果有需要在const成员函数中修改对象状态，则需要在函数前加mutable关键字
	mutable int z;
	Const() {
		// 不可修改指向的内存地址内的值
		//*x = 10；
		// 可修改指向的内存地址
		x = new int;
		// 可修改指向的内存地址内的值
		*y = 20;
		// 不可修改指内存地址
		//y = new int;

		z = 30;
	}
	~Const() {
		delete x;
		delete y;
	};
public:
	// 函数后加const表示该函数不修改对象状态，即该函数只能读取对象状态，不能修改对象状态
	int GetX() const {
		return z;
	}
	// 当const作用于引用时，不同于指针，不论位置均表示引用指向的对象不能被修改
};