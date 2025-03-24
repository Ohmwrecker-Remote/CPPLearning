#include <chrono>
#include <iostream>

class Timer {
private:
	// ʹ��chrono�ĸ߾���ʱ�ӻ�ȡ��ǰʱ��
	std::chrono::steady_clock::time_point start_time = std::chrono::high_resolution_clock::now();
public:
	~Timer() {
		// ���㲢���ʱ��
		auto end_time = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration<double>(end_time - this->start_time).count();
		std::cout << "Time taken: " << duration << " microseconds" << std::endl;
	};
};