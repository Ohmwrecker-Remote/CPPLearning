#include "stdafx.h"

class SonOfCast;

class Cast {
public:
	int a;
	float* b;
	double* c;
	Cast() : a(10), b(nullptr), c(nullptr) {
		// ִ�зǶ�̬ת����û������ʱ��������֤ת���İ�ȫ��
		double a1 = static_cast<double>(a);
		// ֻ���ڼ��ϻ����const���ԣ����� const �� volatile ����֮�⣬Ŀ�����ͱ�����Դ������ͬ
		const float* b1 = const_cast<const float*>(b);
		// ��ĳ��ָ���Ϊ�������͵�ָ��,Ҳ���԰�ָ��ת��Ϊ����
		Cast* c1 = reinterpret_cast<Cast*>(c);
	}
	virtual ~Cast() {};
};

class SonOfCast : public Cast {
public:
	SonOfCast* d;
	SonOfCast() : d(nullptr) {
		// dynamic_cast ����������ʱ���а�ȫ�����»����ת����Ҫ��Ŀ�����;��ж�̬��,type��Ϊ���ָ�롢������û��� void*
		Cast* d1 = dynamic_cast<Cast*>(d);
	}
};