#include "stdafx.h"

class Union {
public:
    struct vector2{
        float x, y;
    };
    // 联合体占用联合体内最大的数据成员的空间,在这里是4个float即16字节
    // 可以通过不同的方式来访问数据,例如使用v2.y或者w访问相同的内存地址
    union {
        // 两个结构体均占用16个字节的空间
        struct {
            float x, y, z, w;
        };
        struct {
            // v1内存地址对应x和y,v2内存地址对应z和w
            vector2 v1, v2;
        };
    };
    Union() : x(0.0f), y(1.0f), z(2.0f), w(3.0f){
        printUnion(this);
        // 在这里对z访问即访问了联合体内结构体中vector2中v1的x成员的内存地址
        z = 499.1f;
        printUnion(this);
    }
    void printUnion(Union* u) {
        std::cout << u->v1.x << " " << u->v1.y << std::endl;
        std::cout << u->v2.x << " " << u->v2.y << std::endl;
        std::cout << "-----------------------" << "\n";
    }
};