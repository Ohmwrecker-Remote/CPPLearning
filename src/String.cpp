#include <iostream>
#include <string>

class String {
public:
	const char* name = "Ohmwrecker";
	char name2[11] = {'O','h','m','w','r','e','c','k','e','r','\0'};
	// C++������ֱ��ʹ���������ƴ���ַ�������Ϊ"Ohmwrecker"ʵ������const char��������
	std::string name3 = "Ohmwrecker"; // + "hello"
	std::string name4;
	bool contains;
	String() {
		// +=��std::string�б����أ�����ֱ��ƴ���ַ���
		name3 += "hello";
		// ����ʹ��std::string���캯������һ���ַ����󸽼��ַ�����
		name4 = std::string("Ohmwrecker") + "hello";
		contains = name4.find("hello") != std::string::npos; //�ж��Ƿ����hello
	}
};

// ����������ã�ʵ���ϴ������ԭ�����ĸ�����Ӱ������
// const��ʾ�������������ﱻ�޸�
static void printString(const std::string& str) {
	std::cout  << str << std::endl;
}