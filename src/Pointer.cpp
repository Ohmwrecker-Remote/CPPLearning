#include <iostream>
void log(int x);
void log(void* x);

// ʹ���������޸Ĵ����number���ڴ��ַ��ֵ
void increase(int* value) {
	(*value)++;// �������ſ������������ú�++
}

// ʹ��������ֱ�Ӳ�������������ڴ��ַ
void increase(int& value) {
	log(&value);
	value++;
}
void pointer() {
	int var = 8;
	log(var);
	int* ptr = nullptr;// ָ�����Ͷ�ָ�뱾����Ҫ��ָ��ֻ��һ��ָ���ַ�ռ��������ָ������������Ҫ���߱�������ʲô���Ͳ��������ַ
	ptr = &var;// ptrΪ��ַ *ptrΪʹ�������ַָ���λ��
	*ptr = 10;
	log(var);
	log(ptr);
	struct student {
		int ID;
		char name;
		student(int a, char b) : ID(a), name(b) {}
	}*stuPtr = nullptr; // ��ʼ��stuPtr
	student p2(3, 255);
	struct Point {
		int x, y;
		Point(int a, int b) : x(a), y(b) {}
	}*PointPtr;
	Point p3(5, 6); // ���ù��캯��
	PointPtr = &p3;
	log(PointPtr);

	int number = 5;
	log(number);
	increase(&number);// ����number�ڴ��ַ
	log(number);
	log(&number);
	increase(number);// 
	log(number);
	std::cin.get();

}
