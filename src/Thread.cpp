#include <iostream>
#include <thread>
#include <functional>

class Thread {
public:
	bool is_Finieshed = false;

	Thread() {
		// ��������ָ������߳���
		std::function<void()> workPointer = [this]() {
			std::cout << std::this_thread::get_id() << " is working..." << std::endl;
				while (!is_Finieshed) {
					std::cout << "Thread is working..." << std::endl;
					std::this_thread::sleep_for(std::chrono::milliseconds(1000));
				}
			};
		// �����߳�
		std::thread worker(workPointer);
		std::cin.get();
		is_Finieshed = true;
		// �ȴ��߳̽����ټ���ִ��������
		worker.join();
		std::cout << "Thread :" <<  std::this_thread::get_id() <<  " is finished." <<  std::endl;
		std::cin.get();
	}
};