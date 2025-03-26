#include "stdafx.h"

struct Vector2 {
    float x, y;

    Vector2 Add(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    // 运算符重载
    Vector2 operator+(const Vector2& other) const {
        return Add(other);
    }

    Vector2 Multiply(const Vector2& other) const {
        return Vector2(x * other.x, y * other.y);
    }

    Vector2 operator*(const Vector2& other) const {
        return Multiply(other);
    }

    bool operator==(const Vector2& other) {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Vector2& other) {
        return !(*this == other);
    }

    Vector2(float x, float y) : x(x), y(y) {}
};

// 重载了输出流运算符<<，用于将Vector2对象格式化输出到输出流
static std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
    stream << "Vector2(" << other.x << ", " << other.y << ")";
    return stream;
};
