#include <string>
#include <vector>
#include <array>

// ����һ���ṹ�����洢��ͬ���͵ķ���ֵ
struct returnType {
	int value;
	bool success;
	std::string message;
};

static returnType MultipleReturnValueMethod() {
	return { 10, true, "Success" };
}

// ���ض����ͬ����ֵ����ʹ��vector����array
static std::array<int,2> MultipleReturnValueMethod2() {
	std::array<int,2> result = {0};
	return result;
}