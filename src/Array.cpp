#include <iostream>

class Array {
public:
	//arrΪջ�Ϸ�������飬anotherΪ���Ϸ��������
	//arr�����������Ž����Զ����٣�anotherֱ����������֮ǰ�����ڣ���Ҫ�ֶ�����
	//���һ����������һ��������������ʹ��new[]�������Ϸ��������
	int arr[10];
	//���Ϸ�������飬anotherΪָ����䵽�����ַ��ָ��
	int* another = new int[10];
	Array() {
		for (int i = 0; i < 10; i++) {
			arr[i] = 0;
		}
		for (int i = 0; i < 10; i++) {
			another[i] = 0;
		}
	}
	void changeValue() {
		// ����ʵ������һ��ָ�룬ָ������ĵ�һ��Ԫ��
		int* ptr = arr;
		// ����ʹ��ptrָ���������Ԫ�أ�ʹ�õ�ƫ��ʵ��ȡ����ָ������
		*(ptr + 2) = 6;
		// ʹ��ǿ������ת����ptrת��Ϊcharָ�룬�ټ���char��ƫ����������ͬ��������Ԫ��
		*(int*)((char*)ptr + 8) = 9;
	}
	int getCount(int* ptr) {
		return sizeof(&ptr)/sizeof(int);
	}
	~Array() {
		delete[] another;
	}
};