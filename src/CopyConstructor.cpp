#include "stdafx.h"

class CopyConstructor {
private:
	char* m_strBuffer;
	int m_size;
public:
	CopyConstructor(const char* s) {
		m_size = (int)strlen(s) + 1;
		m_strBuffer = new char[m_size];
		memcpy(m_strBuffer, s, m_size);
		m_strBuffer[m_size - 1] = '\0';
	}

	// �������캯������������Ҫ����ʱ��ϵͳ���Զ����øú����������������ֻ����ָ��
	CopyConstructor(const CopyConstructor& other) 
		: m_size(other.m_size)
	{
		std::cout << "Copied" << std::endl;
		m_strBuffer = new char[m_size];
		memcpy(m_strBuffer, other.m_strBuffer, m_size);
	}

	~CopyConstructor() {
		delete[] m_strBuffer;
	}

	char& operator[](int index) {
		return m_strBuffer[index];
	}

	// ��Ԫ���������������������, ��Ԫ�������Է���˽�г�Ա
	friend static std::ostream& operator<<(std::ostream& os, const CopyConstructor& obj);
};

static std::ostream& operator<<(std::ostream& os, const CopyConstructor& obj) {
	os << obj.m_strBuffer;
	return os;
}