#include <iostream>

// 当使用静态声明i，重复5次Function()函数，输出结果为5
void Static_i_Function() {
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

// 当不使用静态声明i，重复5次Function()函数，输出结果为1
void NonStatic_i_Function() {
	int i = 0;
	i++;
	std::cout << i << std::endl;
}
// 如果想让方法内的变量不在每次调用的时候初始化，又不想让方法外访问这个变量，就使用静态声明。