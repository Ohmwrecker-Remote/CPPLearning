#include <iostream>

template<typename T>
static void Log(T x) {
	std::cout << x << std::endl;
}

// ʹ���������޸Ĵ����number���ڴ��ַ��ֵ
void increase(int* value) {
	(*value)++;// �������ſ������������ú�++
}

// ʹ��������ֱ�Ӳ�������������ڴ��ַ
void increase(int& value) {
	//Log(&value);
	value++;
}

void pointer() {

	int var = 8;
	Log(var);
	int* ptr = nullptr;// ָ�����Ͷ�ָ�뱾����Ҫ��ָ��ֻ��һ��ָ���ַ�ռ��������ָ������������Ҫ���߱�������ʲô���Ͳ��������ַ
	ptr = &var;// ptrΪ��ַλ�� *ptrΪʹ�������ַָ���λ��
	*ptr = 10;
	Log(var);
	Log(ptr);
	struct student {
		int ID;
		char name;
		student(int a, char b) : ID(a), name(b) {}
	}*stuPtr = nullptr; // ��ʼ��stuPtr
	student p2 = student(3, 'A');
	struct Point {
		int x, y;
		Point(int a, int b) : x(a), y(b) {}
	}*PointPtr;
	Point p3(5, 6); // ���ù��캯��
	PointPtr = &p3;
	Log(PointPtr);

	int number = 5;
	Log(number);
	increase(&number);// ����number�ڴ��ַ
	Log(number);
	Log(&number);
	increase(number);// 
	Log(number);
	std::cin.get();

}
