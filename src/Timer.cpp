#include <chrono>
#include <iostream>

// 计时器类
// start_time记录开始时间，构造函数记录当前时间，析构函数计算并输出时间
class Timer {
private:
	// 使用chrono的高精度时钟获取当前时间
	std::chrono::time_point<std::chrono::steady_clock> start_time, end_time;
	std::chrono::duration<float> duration = std::chrono::duration<float>::zero();
public:
	Timer() {
		this->start_time = std::chrono::high_resolution_clock::now();
	};
	~Timer() {
		// 计算并输出时间
		this->end_time = std::chrono::high_resolution_clock::now();
		this->duration = this->end_time - this->start_time;
		std::cout << "Time taken: " << std::chrono::duration_cast<std::chrono::milliseconds>(this->duration).count() << " 毫秒" << std::endl;
	};
};