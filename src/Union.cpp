#include "stdafx.h"

class Union {
public:
    struct vector2{
        float x, y;
    };
    // ������ռ�����������������ݳ�Ա�Ŀռ�,��������4��float��16�ֽ�
    // ����ͨ����ͬ�ķ�ʽ����������,����ʹ��v2.y����w������ͬ���ڴ��ַ
    union {
        // �����ṹ���ռ��16���ֽڵĿռ�
        struct {
            float x, y, z, w;
        };
        struct {
            // v1�ڴ��ַ��Ӧx��y,v2�ڴ��ַ��Ӧz��w
            vector2 v1, v2;
        };
    };
    Union() : x(0.0f), y(1.0f), z(2.0f), w(3.0f){
        printUnion(this);
        // �������z���ʼ��������������ڽṹ����vector2��v1��x��Ա���ڴ��ַ
        z = 499.1f;
        printUnion(this);
    }
    void printUnion(Union* u) {
        std::cout << u->v1.x << " " << u->v1.y << std::endl;
        std::cout << u->v2.x << " " << u->v2.y << std::endl;
        std::cout << "-----------------------" << "\n";
    }
};