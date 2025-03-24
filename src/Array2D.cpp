#include <iostream>

// һ�㲻ʹ�ö�ά���������飬��Ϊ����ĵ�ַ�ռ䲻������Ч�ʵ��£�����תΪ��һά����ʵ��
template<typename T>
class Array2D {
private:
	int X, Y, Z;
public:
	//��ά����
	T** arr2D;
	//��ά����
	T*** arr3D;
	// ��ά���鹹�캯��
	Array2D(int X, int Y) : X(X), Y(Y), Z(0) {
		arr2D = new T*[X];
		arr3D = nullptr;
		for (int i = 0; i < X; i++) {
			arr2D[i] = new T[Y];
		};
	}
	// ��ά���鹹�캯��
	Array2D(int X, int Y, int Z) : X(X), Y(Y), Z(Z) {
		arr2D = nullptr;
		arr3D = new T**[X];
		for (int i = 0; i < X; i++) {
			arr3D[i] = new T* [Y];
			for (int j = 0; j < Y; j++) {
				arr3D[i][j] = new T[Z];
			};
		};
	}
	// ��������
	~Array2D() {
		// �ͷ��ڴ�,������ɾ���ڲ���������
		if (arr2D != nullptr) {
			for (int i = 0; i < X; i++) {
				delete[] arr2D[i];
			};
		};
		// Ƕ��ѭ��ɾ���ڲ���������
		if (arr3D != nullptr) {
			for (int i = 0; i < X; i++) {
				for (int j = 0; j < Y; j++) {
					delete[] arr3D[i][j];
				};
			};
		};
		// ���ɾ����������
		delete[] arr2D;
		delete[] arr3D;
	}
};