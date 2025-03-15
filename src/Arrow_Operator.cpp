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

    // �� -> ��������ط���Vector3��ָ�룬�ü�ͷ�����Ҳ���Է���Vector3�ĳ�Ա����
    Vector3* operator->() {
        return ptr;
    }
};