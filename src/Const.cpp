#include <iostream>

class Const {
public:
	// const int* == int const*
	// const������ָ������ʱ����ʾָ��ָ��Ķ����ܱ��޸�
	const int* x = new int;

	// const�����ڱ���ʱ����ʾ�������ܱ��޸ģ����ñ���ֻ��ָ��һ���̶���ַ���ڴ�ռ�
	int* const y = new int;

	int z;
	Const() {
		// �����޸�ָ��Ķ����ֵ
		//*x = 10��
		// ���޸�ָ�����ĵ�ַ
		x = new int;
		// ���޸�ָ��Ķ����ֵ
		*y = 20;
		// �����޸�ָ�����ĵ�ַ
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