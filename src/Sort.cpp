#include "stdafx.h"

class Sort {
public:
	std::vector<int> sortList = { 5,1,4,8,3,2,7,6 };
	Sort() {
		// ʹ��sortList�����������������Ĭ����������
		//std::sort(sortList.begin(), sortList.end());
		// ʹ��lambda�Զ��ȽϺ���,�ڵ�һ����������ǰ��ʱ����true,��a < b ����true��Ϊ��������
		std::sort(sortList.begin(), sortList.end(), [](const int& a, const int& b) {
			// ���aΪ1,����false��a���ں���,���bΪ1,����true��b���ں���,����Ч��Ϊ����������1���ں���
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