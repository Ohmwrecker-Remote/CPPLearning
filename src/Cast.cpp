#include "stdafx.h"

class SonOfCast;

class Cast {
public:
	int a;
	float* b;
	double* c;
	Cast() : a(10), b(nullptr), c(nullptr) {
		// 执行非动态转换，没有运行时类检查来保证转换的安全性
		double a1 = static_cast<double>(a);
		// 只用于加上或除掉const属性，除了 const 或 volatile 属性之外，目标类型必须与源类型相同
		const float* b1 = const_cast<const float*>(b);
		// 把某种指针改为其他类型的指针,也可以把指针转换为整数
		Cast* c1 = reinterpret_cast<Cast*>(c);
	}
	virtual ~Cast() {};
};

class SonOfCast : public Cast {
public:
	SonOfCast* d;
	SonOfCast() : d(nullptr) {
		// dynamic_cast 用于在运行时进行安全的向下或横向转换，要求目标类型具有多态性,type需为类的指针、类的引用或者 void*
		Cast* d1 = dynamic_cast<Cast*>(d);
	}
};