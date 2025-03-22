#include <iostream>
#include <array>
#include <functional>

static void printValue(std::string& x);
static void ForEach(const std::array<std::string, 5>& arr, void(*func)(std::string&));
static void ForEach_Funtional(const std::array<std::string, 5>& arr, std::function<void(std::string&)>& func);


class FunctionPointer {
private:
    std::array<std::string, 5> strings;
public:
    FunctionPointer() {
        int i = std::rand();
        strings[0] = "Hello";
        strings[1] = "World";
        strings[2] = "How";
        strings[3] = "are";
        strings[4] = "you  ";
        // 使用函数指针调用ForEach函数
        ForEach(strings, printValue);
        // 或者使用lambda表达式创建一个匿名函数
        // []为捕获的参数,&为引用方式捕获所有,=为以值传递方式捕获所有
        // 非捕获lambda可以隐式转换为函数指针，但捕获lambda不能
        ForEach(strings, [](std::string& x) {std::cout << "Lambda Value:" << x << std::endl; });
        std::function<void(std::string&)> lambda = [&i](std::string& x) {std::cout << "Lambda Value:" << x << "Capture Value:" << i << std::endl; };
        ForEach_Funtional(strings, lambda);
    };
};

static void printValue(std::string& x) {
    std::cout << "Value:" << x << std::endl;
};

// void(*func)(std::string&)为C风格的函数指针，参数为std::string&，返回值为void,func为函数指针名
static void ForEach(const std::array<std::string,5>& arr,void(*func)(std::string&)){
    for (std::string s: arr) {
        func(s);
    };
};

// 使用std::function<void(std::string&)>作为函数指针类型
static void ForEach_Funtional(const std::array<std::string, 5>& arr, std::function<void(std::string&)>& func) {
    for (std::string s : arr) {
        func(s);
    };
};