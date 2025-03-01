void log(int x);
void log(void* x);

// 引用
void Reference() {
	int a = 8;
	int b = 5;

	// 创建新的引用，对ref操作等于直接对a操作
	int& ref1 = a;
	ref1 = 10;
	log(a);
	// 等同于以下代码
	int* ref2 = &a;
	*ref2 = 9;
	log(a);
}