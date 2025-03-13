#include <iostream>

class ScopeEntity {
public:
    ScopeEntity() {
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
};