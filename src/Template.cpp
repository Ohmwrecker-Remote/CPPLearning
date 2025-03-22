#include <iostream>

// 使用模板，在实例化时指定模板参数
template<int N>
class Template {
private:
    int arr[N];
public:
    Template() {
        for (int i = 0; i < N; i++) {
            arr[i] = i;
        }
    }
    int get_arr(int & x) {
        return arr[x];
    }
};

// 使用模板函数避免重复代码，实际代码在调用时才生成
template<typename T>
static void Log(T x) {
    std::cout << x << std::endl;
}