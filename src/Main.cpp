#include <iostream>
#include <windows.h> //≤‚ ‘Commit

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
        Static_i_Function();
    }
    void NonStatic_i_Function();
    for (int i = 0; i < 5; i++) {
        NonStatic_i_Function();
    }
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