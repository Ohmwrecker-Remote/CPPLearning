# include <iostream>
# include <string>

//基类
class Entity {
public:
	//使用虚函数让子类可以重写
	virtual std::string GetName() { return "Entity"; };
};

class Player : public Entity {
private:
	//字符串成员变量
	std::string m_name;
public:
	//添加const修饰符以防止修改成员变量
	Player(const std::string name) : m_name(name) {}
	//重写基类的虚函数，添加上override以区分错误
	std::string GetName() override { return m_name; }
};