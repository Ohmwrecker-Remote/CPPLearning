void log(int x);
void log(void* x);

// ����
void Reference() {
	int a = 8;
	int b = 5;

	// �����µ����ã���ref��������ֱ�Ӷ�a����
	int& ref1 = a; 
	ref1 = 10;
	log(a);
	// ��ͬ�����´���
	int* ref2 = &a; // &a�൱�ڷ���a���ڴ��ַ��ref2
	*ref2 = 9;
	log(a);
}