#include "stdafx.h"

class Example {
private:
	std::string name;
	int age;
public:
	// ����ڹ��캯��ǰ�����explicit�ؼ��֣���˵���ù��캯��ֻ��������ʾת��������������ʽת��
	Example( const std::string& name ) : name(name),age(-1) {}
	Example( int age) : name("Unknown"), age(age) {}

	Example() {
		// ��ʽת������ΪageΪint���ͣ�����һ��int���͵Ĺ��캯����������ʽת��ΪExample����
		Example a = 1;
		// ��Ϊ��Ohmwrecker����һ��const char*���ͣ������ڹ��캯�������Բ�����ʽת��ΪExample����
		//Example b = "Ohmwrecker";
		// 
		// ʹ�ù��캯������Ohmwrecker��ת��Ϊstd::string���ͣ�Ȼ������ʽת��ΪExample����
		Example c = std::string("Ohmwrecker");
	}
};