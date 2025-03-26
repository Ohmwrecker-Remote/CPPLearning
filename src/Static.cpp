#include "stdafx.h"

// ��̬ʵ������
// ����ģʽ
// ��֤һ����ֻ��һ��ʵ�������ṩһ����������ȫ�ַ��ʵ�
class Singleton {
private:
	Singleton() {} // ���캯��˽�л�,��ֹ�ⲿ����ʵ��
	static Singleton instance; // ��̬��Ա����,�������Ψһʵ��
public:
	// ��̬��Ա����,ֱ��ͨ����������,�������Ψһʵ��
	static Singleton& getInstance() {
		return instance;
	}
	// ʵ�ֵĹ��ܺ���������ͨ��Ψһʵ��������
	void Print() {
		// �ֲ���̬����,ֻ�ھֲ�������ɼ�,��������������󲻻����٣�����һ��������ʼʱ���Լ���ʹ�ã�ֵ����
		static int interiorStaticVar = 0; 
	}
};

// ȫ�־�̬����,�Ӷ�����ļ�����ʼ���ļ�ĩβ�ſɼ��������ļ��޷�����
static int globalStaticVar = 0;

// ��̬����,ֻ�����������ļ��пɼ�,�����ļ��޷�����
static void staticPrint() {
	std::cout << "Static Function" << std::endl;
}

class Static {
private:
	// ��ľ�̬����,����ʵ�ֶ��ʵ������ͬһ������,�����ķ���ֻ��Ҫͨ��������ʵ��,������ͨ��������ʵ��
	static int count;
public:
	Static() {
		count++;
	}
	~Static() {
		count--;
	}
	// ��ľ�̬����,ͬ��ľ�̬����һ��������ĳ������,���������౾��ֻ��ͨ������������
	// ����ľ�̬�����в�����ֱ�ӷ�����ķǾ�̬��Ա����,��Ϊ�Ǿ�̬��Ա�������ڶ���,����̬��Ա����������
	// ��Ҫͨ�����������ʷǾ�̬��Ա����
	static int Getcount() {
		return count;
	}
};

// ��ʹ�þ�̬����i���ظ�5��Function()������������Ϊ5
static void Static_i_Function() {
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

// ����ʹ�þ�̬����i���ظ�5��Function()������������Ϊ1
static void NonStatic_i_Function() {
	int i = 0;
	i++;
	std::cout << i << std::endl;
} 
// ������÷����ڵı�������ÿ�ε��õ�ʱ���ʼ�����ֲ����÷�������������������ʹ�þ�̬������