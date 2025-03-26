#include "stdafx.h"
#include "GLFW/glfw3.h"
#include "Log.h"
#include "VirtualFunction.cpp"
#include "Array.cpp"
#include "String.cpp"
#include "Static.cpp"
#include "Operator.cpp"
#include "This.cpp"
#include "Scope.cpp"
#include "CopyConstructor.cpp"
#include "Arrow_Operator.cpp"
#include "Vector.cpp"
#include "Template.cpp"
#include "FunctionPointer.cpp"
#include "Thread.cpp"
#include "Array2D.cpp"
#include "Timer.h"
#include "Sort.cpp"
#include "Union.cpp"
#include "VirtualDistructor.cpp"

//extern "C" int glfwInit();

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

    for (int i = 0; i < 5; i++) {
        //Static_i_Function();
    }
    void NonStatic_i_Function();
    for (int i = 0; i < 5; i++) {
        //NonStatic_i_Function();
    }

    //// Log
    //Log log(Log::LogLevel::LogLevel_Info); 
    // 使用::（类名和作用域解析符）对Log命名空间内的LogLevel进行访问
    //log.Info("Hello, world!");
    //log.Warn("Warning message");
    //log.Error("Error message");
    //PrintLogLevel printLogLevel;
    //printLogLevel.Print();

    //// VirtualFunction
    //// 使用虚函数对基类和派生类进行测试
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
    //// 直接使用new a()会导致内存泄漏，最好显式创建指针变量并删除

    //// Array
    //Array* array = new Array();
    //array->changeValue();
    //std::cin.get();

    //// String
    //String* str = new String();
    //std::cout << "String::str = " << str->name << std::endl;
    //std::cout << "String::str = " << str->name2 << std::endl;


    //// Operator
    //Vector2 v1(1.0f, 2.0f);
    //Vector2 v2(3.0f, 4.0f);
    //Vector2 result1 = v1 + v2;
    //Vector2 result2 = v1 * v2;
    //std::cout << "result1: " << result1.x << ", " << result1.y << std::endl;
    //std::cout << "result2: " << result2.x << ", " << result2.y << std::endl;

    //// 直接将Vector2传入ostream不可行，需要重载<<运算符
    //std::cout << result1 << std::endl;
    //std::cout << result2 << std::endl;

    //// This
    //This_Operator(114514,1919810);

    ////Scope
    //{
    //    // 使用作用域指针，让即使是堆上分配的对象也会在作用域结束时自动释放
    //    Scope e = new ScopeEntity();
    //    // 也可以使用unique_ptr,当它离开作用域时，会自动释放对象
    //    std::unique_ptr<ScopeEntity> unique_ptr(ScopeEntity());
    //    // 使用make_unique方法初始化可以在构造函数出现异常时自动释放对象
    //    std::unique_ptr<ScopeEntity> unique_ptr2 = std::make_unique<ScopeEntity>();
    //    // 使用shared_ptr可以复制指针，当引用计数为0时，会自动释放对象
    //    std::shared_ptr<ScopeEntity> shared_ptr(ScopeEntity());
    //    // 使用make_shared可以在构造函数出现异常时自动释放对象
    //    std::shared_ptr<ScopeEntity> shared_ptr2 = std::make_shared<ScopeEntity>();
    //    // 优先使用unique_ptr，因为开销小，而且可以避免忘记释放内存
    //}
    //This_Operator(114514,1919810);

    //// Arrow_Operator
    //// 使用箭头操作符计算偏移量
    //int offset = (int)&((Vector3*)0)->z;
    //std::cout << "offset = " << offset << std::endl;
    //{
    //    ScopePtr_Vector3 ScopePtr_Vector3_test = new Vector3;
    //    ScopePtr_Vector3_test->x = 1.0f;
    //}

    //// Vector
    //// 实际就是ArrayList，和std::array不同，vector分配在堆上，array分配在栈上
    //// 静态分配数组
    //Vertex* vertex = new Vertex[10];
    //// 初始化数组
    //vertex[0] = { 1.0f, 2.0f, 3.0f };
    //delete[] vertex;
    //// 使用std::vector动态分配数组，可以自动扩容
    //// 使用Vertex或Vertex*，前者为顺序存储，后者为随机存储
    //// std::vector<Vertex> vertex(10)是创建了10个Vertex对象
    //std::vector<Vertex> vertex2;
    //// 使用reserve预分配内存减少复制优化性能
    //vertex2.reserve(4);
    //// 初始化数组，注意push_back和emplace_back的区别，前者在main函数栈内创建对象复制到Vertex内存空间，后者直接在Vertex内存空间构造对象
    //vertex2.push_back(Vertex(1.0f, 2.0f, 3.0f));
    //vertex2.push_back(Vertex(4.0f, 5.0f, 6.0f));
    ////使用emplace_back直接构造对象放入Vertex内存空间，直接避免复制
    //vertex2.emplace_back(7.0f, 8.0f, 9.0f);
    //vertex2.emplace_back(10.0f, 11.0f, 12.0f);
    //// 增强for循环，使用&避免复制
    //for (auto& v : vertex2) {
    //    std::cout << v << std::endl;
    //}
    //// 释放内存
    ////vertex2.clear();
    //// 也可以单独删除元素
    //// begin()为数组第一个元素的指针
    //vertex2.erase(vertex2.begin() + 1);

    //// CopyConstructor
    //CopyConstructor string = "Ohmwrecker";
    //CopyConstructor string2 = string;
    //string2[0] = 'X';
    //std::cout << "string = " << string <<std::endl;
    //std::cout << "string2 = " << string2 << std::endl;

    //// GLFW包引入
    //int a = glfwInit();
    //std::cout << a << std::endl;  

    // FunctionPointer
    //FunctionPointer functionPointer;

    // Thread
    //Thread thread;

    // Array2D
    //{
    //    Timer timer("Array2D");
    //    Array2D<int> array2D(3, 3);
    //    array2D.arr2D[0][0] = 1;
    //    array2D.arr2D[0][1] = 2;
    //    array2D.arr2D[0][2] = 3;
    //}

    // Sort
    //Sort sort;

    // Union
    //Union unionTest;

    // VirtualDistructor
    //Base* base = new Base();
    //delete base;

    // 调用基类的构造函数和析构函数
    //Base constructor called
    //Base destructor called

    //std::cout << "-----------\n";
    //Derived* derived = new Derived();
    //delete derived;

    // 调用基类的构造函数和析构函数，再调用派生类的构造函数和析构函数
    //Base constructor called
    //Derived constructor called
    //Derived destructor called
    //Base destructor called

    //std::cout << "-----------\n";
    //Base* poly = new Derived();
    //delete poly;

    // 如果不为基类的析构函数添加virtual关键字，就会导致用基类引用，引用派生类实例时，无法调用派生类的析构函数，造成内存泄露
    //Base constructor called
    //Derived constructor called
    //Base destructor called
 
    // 正确添加上virtual关键字后,构造由内到外，析构由外到内，避免内存泄露
    //Base constructor called
    //Derived constructor called
    //Derived destructor called
    //Base destructor called

    // Cast

    std::cin.get();
    return 0;
}

static bool judgeNumber(int number) {
    if (number < 5) {
        return 1;
    }
    else return 0;
}

// //使用模板函数避免重复代码
//void log(int x) {
//    std::cout << x << std::endl;
//}
//
//void log(void* x) {
//    std::cout << x << std::endl;
//}
//
//void log(std::string x) {
//    std::cout << x << std::endl;
//}