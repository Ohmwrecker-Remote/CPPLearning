#include "stdafx.h"

//纯虚函数，类似于接口，子类必须实现
class Printable {
public:
	//纯虚函数，子类必须实现该函数，否则无法实例化
	virtual std::string getClassName() = 0;
};

//基类
class Entity : public Printable {
public:
	//使用虚函数让子类可以重写
	virtual std::string getName() { return "Entity"; };
	//实现父类的纯虚函数
	std::string getClassName() { return "class name is Entity"; }
};

//派生类，已经继承了基类实现的纯虚函数
class Player : public Entity {
private:
	//字符串成员变量
	std::string m_name;
public:
	//添加const修饰符以防止修改成员变量
	Player(const std::string name) : m_name(name) {}
	//重写基类的虚函数，添加上override以区分是否重写，可以不写但不建议
	std::string getName() override { return m_name; }
	//实现纯虚函数，如果不实现，子类将无法实例化，且如果不重写父类对纯虚函数的实现，调用该函数将会相当于调用基类的实现，而不是派生类的实现
	std::string getClassName() override { return "class name is Player"; }
};

class A : public Printable {
public:
	std::string getClassName() { return "class name is a"; }
};

//打印类的信息
//因为该文件以include的方式被Main函数包含，如果没有添加静态修饰符，因为该文件和Main文件中都有同名的函数，会导致链接错误
//因此，需要添加静态修饰符
static void PrintClassName(Printable* p) {
	std::cout << p->getClassName() << std::endl;
}
