#include "stdafx.h"

template<typename T>
static void Log(T x) {
	std::cout << x << std::endl;
};

// ����
void Reference() {
	int a = 8;
	int b = 5;

	// �����µ����ã���ref��������ֱ�Ӷ�a����
	int& ref1 = a; 
	ref1 = 10;
	Log(a);
	// ��ͬ�����´���
	int* ref2 = &a; // &a�൱�ڷ���a���ڴ��ַ��ref2
	*ref2 = 9;
	Log(a);
}