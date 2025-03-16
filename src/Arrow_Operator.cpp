#include <iostream>

struct Vector3 {
    float x, y, z;
};

class ScopePtr_Vector3 {
    Vector3* ptr;
public:
    ScopePtr_Vector3(Vector3* p) : ptr(p)
    {
    }
    ~ScopePtr_Vector3() {
        delete ptr;
        std::cout << "ScopePtr_Vector3 destructor called" << std::endl;
    }

    // 对 -> 运算符重载返回Vector3的指针，让箭头运算符也可以访问Vector3的成员变量
    Vector3* operator->() {
        return ptr;
    }
};