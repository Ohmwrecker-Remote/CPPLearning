#include "stdafx.h"

// �������������캯��
// Main��������۲�������������˳��
// �������������ʱ,һ��ע�������������������ȷ���û�����Ա���ȫ�ļ̳�
class Base {
public:
    Base() {
        std::cout << "Base constructor called" << std::endl;
    }
    // �������������߱�����������п��ܱ���չΪ���࣬���ܻ���һ������������Ҫ����
    virtual ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

// Base����
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor called" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};