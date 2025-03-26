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

	// 拷贝构造函数，当对象需要拷贝时，系统会自动调用该函数进行深拷贝而不是只拷贝指针
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

	// 友元函数，用于输出对象内容, 友元函数可以访问私有成员
	friend static std::ostream& operator<<(std::ostream& os, const CopyConstructor& obj);
};

static std::ostream& operator<<(std::ostream& os, const CopyConstructor& obj) {
	os << obj.m_strBuffer;
	return os;
}