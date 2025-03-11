#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std::string_literals; // ���������ռ䣬ʹ�ÿ���ֱ��ʹ��"hello"s��ʾ�ַ���������

// �ַ���������
// ��ָ�ڴ�������˫����ֱ����д���ַ���ֵ
class StringLiteral {
	
	public:
	std::string name0 = "Ohmwrecker"s + "Hello"; // �ַ��������������s��ʾ���ַ���������ת��Ϊ�ַ�������
	// �൱����ջ�Ϸ����ڴ棬�����ַ���ֵ�������ڴ��е��ַ������У�����ֱ���޸ĳ��������ַ���ֵ�������޸�
	char name[11] = "Ohmwrecker"; // �Դ�һ��\0�����ַ�������

	// ָ�����ֱ��ָ���������ַ������������޸�
	const char* name2 = "Ohmwrecker";

	// ��̬�����ڴ棬�����ַ���ֵ�������ڴ��е��ַ�������
	char* name3 = new char[11]; // new�ؼ�����Ҫ�ֶ��ͷ��ڴ棬ʹ�������Ҫ�ֶ�delete[] name3;

	const wchar_t* name4 = L"Ohmwrecker"; // ���ַ��ַ���
	const char16_t* name5 = u"Ohmwrecker"; // 16λ�ַ��ַ��� UTF-16
	const char32_t* name6 = U"Ohmwrecker"; // 32λ�ַ��ַ��� UTF-32
	StringLiteral() {
		name[0] = 'H';
		strcpy_s(name3, 11 ,"Ohmwrecker");
	}
	~StringLiteral() {
		delete[] name3;
	}
};