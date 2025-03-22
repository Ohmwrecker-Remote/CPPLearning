#include <iostream>
#include <array>

static void printHello(std::string& x);
static void ForEach(const std::array<std::string, 5>& arr, void(*func)(std::string&));


class FunctionPointer {
private:
    std::array<std::string, 5> strings;
public:
    FunctionPointer() {
        strings[0] = "Hello";
        strings[1] = "World";
        strings[2] = "How";
        strings[3] = "are";
        strings[4] = "you  ";
        // 使用函数指针调用ForEach函数
        ForEach(strings, printHello);
    };
};

static void printHello(std::string& x) {
    std::cout << "Value:" << x << std::endl;
};

// void(*func)(std::string&)为C风格的函数指针，参数为std::string&，返回值为void,func为函数指针名
static void ForEach(const std::array<std::string,5>& arr,void(*func)(std::string&)){
    for (std::string s: arr) {
        func(s);
    };
};