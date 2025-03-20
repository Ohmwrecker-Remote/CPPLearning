#include <iostream>
#include <windows.h> //����Commit
#include "GLFW/glfw3.h"
#include "Log.h"
#include "VirtualFunction.cpp"
#include "Array.cpp"
#include "String.cpp"
#include "Operator.cpp"
#include "This.cpp"
#include "Arrow_Operator.cpp"
#include "Vector.cpp"

extern "C" int glfwInit();

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
    //Vector2 v1(1.0f, 2.0f);
    //Vector2 v2(3.0f, 4.0f);
    //Vector2 result1 = v1 + v2;
    //Vector2 result2 = v1 * v2;
    //std::cout << "result1: " << result1.x << ", " << result1.y << std::endl;
    //std::cout << "result2: " << result2.x << ", " << result2.y << std::endl;

    // ֱ�ӽ�Vector2����ostream�����У���Ҫ����<<�����
    //std::cout << result1 << std::endl;
    //std::cout << result2 << std::endl;

    // This
    //This_Operator(114514,1919810);

    // Arrow_Operator
    // ʹ�ü�ͷ����������ƫ����
    //int offset = (int)&((Vector3*)0)->z;
    //std::cout << "offset = " << offset << std::endl;
    //{
    //    ScopePtr_Vector3 ScopePtr_Vector3_test = new Vector3;
    //    ScopePtr_Vector3_test->x = 1.0f;
    //}

    // Vector
    // ʵ�ʾ���ArrayList
    // ��̬��������
    //Vertex* vertex = new Vertex[10];
    // ��ʼ������
    //vertex[0] = { 1.0f, 2.0f, 3.0f };
    //delete[] vertex;
    // ʹ��std::vector��̬��������
    // ʹ��Vertex��Vertex*��ǰ��Ϊ˳��洢������Ϊ����洢
    // std::vector<Vertex> vertex(10)�Ǵ�����10��Vertex����
    std::vector<Vertex> vertex2;
    // ʹ��reserveԤ�����ڴ���ٸ����Ż�����
    vertex2.reserve(4);
    // ��ʼ�����飬ע��push_back��emplace_back������ǰ����main����ջ�ڴ��������Ƶ�Vertex�ڴ�ռ䣬����ֱ����Vertex�ڴ�ռ乹�����
    vertex2.push_back(Vertex(1.0f, 2.0f, 3.0f));
    vertex2.push_back(Vertex(4.0f, 5.0f, 6.0f));
    //ʹ��emplace_backֱ�ӹ���������Vertex�ڴ�ռ䣬ֱ�ӱ��⸴��
    vertex2.emplace_back(7.0f, 8.0f, 9.0f);
    vertex2.emplace_back(10.0f, 11.0f, 12.0f);
    // ��ǿforѭ����ʹ��&���⸴��
    for (auto& v : vertex2) {
        std::cout << v << std::endl;
    }
    // �ͷ��ڴ�
    //vertex2.clear();
    // Ҳ���Ե���ɾ��Ԫ��
    // begin()Ϊ�����һ��Ԫ�ص�ָ��
    vertex2.erase(vertex2.begin() + 1);

    glfwInit();

    std::cin.get();

    return 0;
}

static bool judgeNumber(int number) {
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