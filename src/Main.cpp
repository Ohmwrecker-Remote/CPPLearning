#include <iostream>
#include <windows.h> //����Commit
#include "Log.h"
#include "VirtualFunction.cpp"
#include "Array.cpp"
#include "String.cpp"
#include "Operator.cpp"

int main() {

//    std::cout << "hello world start"<<std::endl;
//    int i = 0;
//    bool judgeNumber(int number);
//    bool condition = true;
////    for(; judgeNumber(i); ){
////
////        i++;
////;       std::cout << "hello world  = " << i << std::endl;
////        //    if (i >= 5) {
////        //        condition = false;
////        //}
////        Sleep(1000); // Use Sleep instead of sleep
////    }
//    while (i <= 5) {
//        std::cout << "hello world  = " << i << std::endl;
//        i++;
//        Sleep(1000);
//    }
//    std::cin.get();
//    i = 0;

    void pointer();
    //pointer();
    void Reference();
    //Reference();
    void testModify();
    //testModify();
    void Static_i_Function();

    for (int i = 0; i < 5; i++) {
        //Static_i_Function();
    }
    void NonStatic_i_Function();
    for (int i = 0; i < 5; i++) {
        //NonStatic_i_Function();
    }

    // Log
    //Log log(Log::LogLevel::LogLevel_Info); 
    // ʹ��::�����������������������Log�����ռ��ڵ�LogLevel���з���
    //log.Info("Hello, world!");
    //log.Warn("Warning message");
    //log.Error("Error message");
    //PrintLogLevel printLogLevel;
    //printLogLevel.Print();

    // VirtualFunction
    //ʹ���麯���Ի������������в���
    //Entity* e = new Entity();
    //std::cout << "Entity::name = " << e->getName() << std::endl;

    //Player* p = new Player("Player");
    //std::cout << "Player::name = " << p->getName() << std::endl;

    //A* a = new A();

    //PrintClassName(e);
    //delete e;
    //PrintClassName(p);
    //delete p;
    //PrintClassName(a);
    //delete a;
    // ֱ��ʹ��new a()�ᵼ���ڴ�й©�������ʽ����ָ�������ɾ��

    // Array
    //Array* array = new Array();
    //array->changeValue();
    //std::cin.get();

    // String
    //String* str = new String();
    //std::cout << "String::str = " << str->name << std::endl;
    //std::cout << "String::str = " << str->name2 << std::endl;


    // Operator
    Vector2 v1(1.0f, 2.0f);
    Vector2 v2(3.0f, 4.0f);
    Vector2 result1 = v1 + v2;
    Vector2 result2 = v1 * v2;
    std::cout << "result1: " << result1.x << ", " << result1.y << std::endl;
    std::cout << "result2: " << result2.x << ", " << result2.y << std::endl;

    // ֱ�ӽ�Vector2����ostream�����У���Ҫ����<<�����
    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;


    return 0;
}

bool judgeNumber(int number) {
    if (number < 5) {
        return 1;
    }
    else return 0;
}

void log(int x) {
    std::cout << x << std::endl;
}

void log(void* x) {
    std::cout << x << std::endl;
}

void log(std::string x) {
    std::cout << x << std::endl;
}