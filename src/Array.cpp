#include <iostream>
#include <array>

class Array {
public:
	//arr为栈上分配的数组，another为堆上分配的数组
	//arr在作用域花括号结束自动销毁，another直到程序销毁之前都存在，需要手动销毁
	//如果一个函数返回一个数组对象，则必须使用new[]创建堆上分配的数组
	int arr[10];
	//堆上分配的数组，another为指向分配到数组地址的指针
	int* another = new int[10];
	// 创建对象同理，使用new创建堆上分配的数组，最后手动使用delete销毁

	// C++11引入的数组类型，可以自动初始化为0，在Debug模式下提供边界检查以及常见功能
	// 静态数组，大小固定，不能改变
	std::array<int, 10> arr2;

	// arr2()在初始化列表中调用，自动初始化为0
	Array(): arr2() {
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

	~Array() {
		delete[] another;
	}
};