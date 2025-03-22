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
        // ʹ�ú���ָ�����ForEach����
        ForEach(strings, printHello);
    };
};

static void printHello(std::string& x) {
    std::cout << "Value:" << x << std::endl;
};

// void(*func)(std::string&)ΪC���ĺ���ָ�룬����Ϊstd::string&������ֵΪvoid,funcΪ����ָ����
static void ForEach(const std::array<std::string,5>& arr,void(*func)(std::string&)){
    for (std::string s: arr) {
        func(s);
    };
};