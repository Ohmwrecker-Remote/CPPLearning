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
		// x = 10不可见，因为它是private成员
		// private成员只能被本类访问即Entity类
		//x = 10;
		// z = 20可见，因为它是protected成员
		//proteced成员可以被派生类继承并访问
		z = 20;
	}
};