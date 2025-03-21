#include <string>
#include <vector>
#include <array>

// 创建一个结构体来存储不同类型的返回值
struct returnType {
	int value;
	bool success;
	std::string message;
};

static returnType MultipleReturnValueMethod() {
	return { 10, true, "Success" };
}

// 返回多个相同类型值可以使用vector或者array
static std::array<int,2> MultipleReturnValueMethod2() {
	std::array<int,2> result = {0};
	return result;
}