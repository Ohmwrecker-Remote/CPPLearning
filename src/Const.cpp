#include "stdafx.h"

class Const {
public:
	// const int* == int const*
	// const������ָ������ʱ����ʾָ��ָ����ڴ治�ܱ��޸�
	const int* x = new int;

	// const�����ڱ���ʱ����ʾ�ڴ��ַ���ܱ��޸ģ����ñ���ֻ��ָ��һ���̶���ַ���ڴ�ռ�
	int* const y = new int;

	// �������Ҫ��const��Ա�������޸Ķ���״̬������Ҫ�ں���ǰ��mutable�ؼ���
	mutable int z;
	Const() {
		// �����޸�ָ����ڴ��ַ�ڵ�ֵ
		//*x = 10��
		// ���޸�ָ����ڴ��ַ
		x = new int;
		// ���޸�ָ����ڴ��ַ�ڵ�ֵ
		*y = 20;
		// �����޸�ָ�ڴ��ַ
		//y = new int;

		z = 30;
	}
	~Const() {
		delete x;
		delete y;
	};
public:
	// �������const��ʾ�ú������޸Ķ���״̬�����ú���ֻ�ܶ�ȡ����״̬�������޸Ķ���״̬
	int GetX() const {
		return z;
	}
	// ��const����������ʱ����ͬ��ָ�룬����λ�þ���ʾ����ָ��Ķ����ܱ��޸�
};