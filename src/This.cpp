#include <iostream>

class This_Operator;
// ��This_Operator��Ҫ��ǰ����
static void printThis_Operator(This_Operator& t);

class This_Operator {
public:
	int x, y;

	// thisʵ������һ��ָ��ǰ�����ָ��
	// ʹ�� this ָ�����������Ա����
	This_Operator(int x, int y) {
		this->x = x;
		this->y = y;
		
		printThis_Operator(*this);
	}
};

static void printThis_Operator(This_Operator& t) {
	std::cout << "x: " << t.x << ", y: " << t.y << std::endl;
};
