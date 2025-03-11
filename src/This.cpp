#include <iostream>

class This_Operator;
// 类This_Operator需要提前声明
static void printThis_Operator(This_Operator& t);

class This_Operator {
public:
	int x, y;

	// this实际上是一个指向当前对象的指针
	// 使用 this 指针来访问类成员变量
	This_Operator(int x, int y) {
		this->x = x;
		this->y = y;
		
		printThis_Operator(*this);
	}
};

static void printThis_Operator(This_Operator& t) {
	std::cout << "x: " << t.x << ", y: " << t.y << std::endl;
};
