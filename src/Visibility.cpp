#include "stdafx.h"

class Entity {
private:
	int x, y;
	void printPrivate() {}
public:
	Entity() {
		x = 0;
		y = 0;
		z = 0;
	}
	void printPublic() {}
protected:
	int z;
	void printProtected() {}
};

class Players : public Entity {
	Players() {
		// x = 10���ɼ�����Ϊ����private��Ա
		// private��Աֻ�ܱ�������ʼ�Entity��
		//x = 10;
		// z = 20�ɼ�����Ϊ����protected��Ա
		//proteced��Ա���Ա�������̳в�����
		z = 20;
	}
};