#include <iostream>

// ʹ��ģ�壬��ʵ����ʱָ��ģ�����
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

// ʹ��ģ�庯�������ظ����룬ʵ�ʴ����ڵ���ʱ������
template<typename T>
static void Log(T x) {
    std::cout << x << std::endl;
}