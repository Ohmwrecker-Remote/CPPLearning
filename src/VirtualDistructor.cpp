#include "stdafx.h"

// 虚析构函数构造函数
// Main函数具体观察析构函数调用顺序
// 当创建基类对象时,一定注意添加虚析构函数，以确保该基类可以被安全的继承
class Base {
public:
    Base() {
        std::cout << "Base constructor called" << std::endl;
    }
    // 虚析构函数告诉编译器这个类有可能被扩展为子类，可能还有一个析构函数需要调用
    virtual ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

// Base子类
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor called" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};