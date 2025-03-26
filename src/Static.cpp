#include "stdafx.h"

// 静态实际运用
// 单例模式
// 保证一个类只有一个实例，并提供一个访问它的全局访问点
class Singleton {
private:
	Singleton() {} // 构造函数私有化,禁止外部创建实例
	static Singleton instance; // 静态成员变量,保存类的唯一实例
public:
	// 静态成员函数,直接通过类名访问,返回类的唯一实例
	static Singleton& getInstance() {
		return instance;
	}
	// 实现的功能函数，仅能通过唯一实例来访问
	void Print() {
		// 局部静态变量,只在局部作用域可见,但在作用域结束后不会销毁，在下一次作用域开始时可以继续使用，值不变
		static int interiorStaticVar = 0; 
	}
};

// 全局静态变量,从定义的文件处开始到文件末尾才可见，其他文件无法访问
static int globalStaticVar = 0;

// 静态函数,只在声明它的文件中可见,其他文件无法访问
static void staticPrint() {
	std::cout << "Static Function" << std::endl;
}

class Static {
private:
	// 类的静态变量,可以实现多个实例共享同一个变量,对他的访问只需要通过类名来实现,不可以通过对象来实现
	static int count;
public:
	Static() {
		count++;
	}
	~Static() {
		count--;
	}
	// 类的静态函数,同类的静态变量一样不属于某个对象,而是属于类本身，只能通过类名来访问
	// 在类的静态函数中不可以直接访问类的非静态成员变量,因为非静态成员变量属于对象,而静态成员变量属于类
	// 需要通过对象来访问非静态成员变量
	static int Getcount() {
		return count;
	}
};

// 当使用静态声明i，重复5次Function()函数，输出结果为5
static void Static_i_Function() {
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

// 当不使用静态声明i，重复5次Function()函数，输出结果为1
static void NonStatic_i_Function() {
	int i = 0;
	i++;
	std::cout << i << std::endl;
} 
// 如果想让方法内的变量不在每次调用的时候初始化，又不想让方法外访问这个变量，就使用静态声明。