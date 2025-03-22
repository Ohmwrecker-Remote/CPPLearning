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
        // ʹ�ú���ָ�����ForEach����
        ForEach(strings, printValue);
        // ����ʹ��lambda���ʽ����һ����������
        // []Ϊ����Ĳ���,&Ϊ���÷�ʽ��������,=Ϊ��ֵ���ݷ�ʽ��������
        // �ǲ���lambda������ʽת��Ϊ����ָ�룬������lambda����
        ForEach(strings, [](std::string& x) {std::cout << "Lambda Value:" << x << std::endl; });
        std::function<void(std::string&)> lambda = [&i](std::string& x) {std::cout << "Lambda Value:" << x << "Capture Value:" << i << std::endl; };
        ForEach_Funtional(strings, lambda);
    };
};

static void printValue(std::string& x) {
    std::cout << "Value:" << x << std::endl;
};

// void(*func)(std::string&)ΪC���ĺ���ָ�룬����Ϊstd::string&������ֵΪvoid,funcΪ����ָ����
static void ForEach(const std::array<std::string,5>& arr,void(*func)(std::string&)){
    for (std::string s: arr) {
        func(s);
    };
};

// ʹ��std::function<void(std::string&)>��Ϊ����ָ������
static void ForEach_Funtional(const std::array<std::string, 5>& arr, std::function<void(std::string&)>& func) {
    for (std::string s : arr) {
        func(s);
    };
};