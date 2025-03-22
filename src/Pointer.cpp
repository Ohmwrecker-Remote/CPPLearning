#include <iostream>

template<typename T>
static void Log(T x) {
	std::cout << x << std::endl;
}

// 使用逆引用修改传入的number的内存地址的值
void increase(int* value) {
	(*value)++;// 打上括号可以先逆向引用后++
}

// 使用引用来直接操作传入参数的内存地址
void increase(int& value) {
	//Log(&value);
	value++;
}

void pointer() {

	int var = 8;
	Log(var);
	int* ptr = nullptr;// 指针类型对指针本身不重要，指针只是一个指向地址空间的整数，指针有类型是需要告诉编译器以什么类型操作这个地址
	ptr = &var;// ptr为地址位置 *ptr为使用这个地址指向的位置
	*ptr = 10;
	Log(var);
	Log(ptr);
	struct student {
		int ID;
		char name;
		student(int a, char b) : ID(a), name(b) {}
	}*stuPtr = nullptr; // 初始化stuPtr
	student p2 = student(3, 'A');
	struct Point {
		int x, y;
		Point(int a, int b) : x(a), y(b) {}
	}*PointPtr;
	Point p3(5, 6); // 调用构造函数
	PointPtr = &p3;
	Log(PointPtr);

	int number = 5;
	Log(number);
	increase(&number);// 传入number内存地址
	Log(number);
	Log(&number);
	increase(number);// 
	Log(number);
	std::cin.get();

}
