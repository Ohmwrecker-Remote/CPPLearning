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

// ������ָ��
class Scope {
private:
    ScopeEntity* m_ptr;
public:
    // ��ʼ��ʱ������Ҫʵ�����Ķ���ָ��
    Scope(ScopeEntity* ptr)
        :m_ptr(ptr)  
    {
    }
    // ��Scope��������ʱ�����Զ����������������ͷ��ڴ�
    ~Scope() {
        delete m_ptr;
    }
    ScopeEntity* getPointer() {
        return m_ptr;
    }
};