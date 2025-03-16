#include <Vector>
#include <iostream>
#include <string>

struct Vertex {
    float x, y, z;
    Vertex() : x(0.0f), y(0.0f), z(0.0f) {}

    Vertex(float x, float y, float z) : x(x), y(y), z(z) {}
    // 复制构造函数
    Vertex(const Vertex& other) : x(other.x), y(other.y), z(other.z) {
        std::cout << "Copy constructor called" << std::endl;
    }
};

static std::ostream& operator<<(std::ostream& os, const Vertex& v) {
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}

