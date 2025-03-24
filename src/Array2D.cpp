#include <iostream>

// 一般不使用二维及以上数组，因为分配的地址空间不连续，效率低下，可以转为用一维数组实现
template<typename T>
class Array2D {
private:
	int X, Y, Z;
public:
	//二维数组
	T** arr2D;
	//三维数组
	T*** arr3D;
	// 二维数组构造函数
	Array2D(int X, int Y) : X(X), Y(Y), Z(0) {
		arr2D = new T*[X];
		arr3D = nullptr;
		for (int i = 0; i < X; i++) {
			arr2D[i] = new T[Y];
		};
	}
	// 三维数组构造函数
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
	// 析构函数
	~Array2D() {
		// 释放内存,必须先删除内层分配的数组
		if (arr2D != nullptr) {
			for (int i = 0; i < X; i++) {
				delete[] arr2D[i];
			};
		};
		// 嵌套循环删除内层分配的数组
		if (arr3D != nullptr) {
			for (int i = 0; i < X; i++) {
				for (int j = 0; j < Y; j++) {
					delete[] arr3D[i][j];
				};
			};
		};
		// 最后删除数组索引
		delete[] arr2D;
		delete[] arr3D;
	}
};