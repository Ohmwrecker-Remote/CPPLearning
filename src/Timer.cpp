#include <chrono>
#include <iostream>

// ��ʱ����
// start_time��¼��ʼʱ�䣬���캯����¼��ǰʱ�䣬�����������㲢���ʱ��
class Timer {
private:
	// ʹ��chrono�ĸ߾���ʱ�ӻ�ȡ��ǰʱ��
	std::chrono::time_point<std::chrono::steady_clock> start_time, end_time;
	std::chrono::duration<float> duration = std::chrono::duration<float>::zero();
	const char* functionName;
public:
	Timer(const char* functionName) : functionName(functionName) {
		this->start_time = std::chrono::high_resolution_clock::now();
	};
	~Timer() {
		// ���㲢���ʱ��
		this->end_time = std::chrono::high_resolution_clock::now();
		this->duration = this->end_time - this->start_time;
		std::cout << functionName << "Time taken: " << std::chrono::duration_cast<std::chrono::microseconds>(this->duration).count() << "΢��" << std::endl;
	};
};