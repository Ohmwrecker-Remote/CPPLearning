#include <chrono>
#include <iostream>

// 计时器类
// start_time记录开始时间，构造函数记录当前时间，析构函数计算并输出时间
class Timer {
private:
	// 使用chrono的高精度时钟获取当前时间
	std::chrono::steady_clock::time_point start_time = std::chrono::high_resolution_clock::now();
public:
	~Timer() {
		// 计算并输出时间
		auto end_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration<double>(end_time - this->start_time).count();
		std::cout << "Time taken: " << duration << " microseconds" << std::endl;
	};
};