#include <iostream>

class Array {
public:
	//arr为栈上分配的数组，another为堆上分配的数组
	//arr在作用域花括号结束自动销毁，another直到程序销毁之前都存在，需要手动销毁
	//如果一个函数返回一个数组对象，则必须使用new[]创建堆上分配的数组
	int arr[10];
	//堆上分配的数组，another为指向分配到数组地址的指针
	int* another = new int[10];
	Array() {
		for (int i = 0; i < 10; i++) {
			arr[i] = 0;
		}
		for (int i = 0; i < 10; i++) {
			another[i] = 0;
		}
	}
	void changeValue() {
		// 数组实际上是一个指针，指向数组的第一个元素
		int* ptr = arr;
		// 逆向使用ptr指针访问数组元素，使用的偏移实际取决于指针类型
		*(ptr + 2) = 6;
		// 使用强制类型转换将ptr转换为char指针，再加上char的偏移量，访问同样的数组元素
		*(int*)((char*)ptr + 8) = 9;
	}
	int getCount(int* ptr) {
		return sizeof(&ptr)/sizeof(int);
	}
	~Array() {
		delete[] another;
	}
};