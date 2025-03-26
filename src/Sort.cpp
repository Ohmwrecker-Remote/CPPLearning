#include "stdafx.h"

class Sort {
public:
	std::vector<int> sortList = { 5,1,4,8,3,2,7,6 };
	Sort() {
		// 使用sortList函数对数组进行排序，默认升序排序
		//std::sort(sortList.begin(), sortList.end());
		// 使用lambda自定比较函数,在第一个参数排在前面时返回true,如a < b 返回true则为升序排序
		std::sort(sortList.begin(), sortList.end(), [](const int& a, const int& b) {
			// 如果a为1,返回false则a排在后面,如果b为1,返回true则b排在后面,最终效果为升序排序且1排在后面
			if (a == 1) {
				return false;
			}
			if (b == 1) {
				return true;
			}
			return a < b;
		});
		print();
	}

	void print() {
		for (int value : this->sortList) {
			std::cout << value << "\n";
		}
	}
};