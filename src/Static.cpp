#include <iostream>

// ��ʹ�þ�̬����i���ظ�5��Function()������������Ϊ5
void Static_i_Function() {
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

// ����ʹ�þ�̬����i���ظ�5��Function()������������Ϊ1
void NonStatic_i_Function() {
	int i = 0;
	i++;
	std::cout << i << std::endl;
}
// ������÷����ڵı�������ÿ�ε��õ�ʱ���ʼ�����ֲ����÷�������������������ʹ�þ�̬������