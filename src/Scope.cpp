#include "stdafx.h"

class ScopeEntity {
public:
    int m_value;
    ScopeEntity(): m_value(0) {
        std::cout << "Entity created" << std::endl;
    }

    ~ScopeEntity() {
        std::cout << "Entity destroyed" << std::endl;
    }
};

// 作用域指针
class Scope {
private:
    ScopeEntity* m_ptr;
public:
    // 初始化时传递需要实例化的对象指针
    Scope(ScopeEntity* ptr)
        :m_ptr(ptr)  
    {
    }
    // 当Scope对象被销毁时，会自动调用析构函数，释放内存
    ~Scope() {
        delete m_ptr;
    }
    ScopeEntity* getPointer() {
        return m_ptr;
    }
};