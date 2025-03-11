#include <iostream>

class Entity {
public:
	int entity_ID;

	Entity() {
		entity_ID = 0;
		std::cout << entity_ID << std::endl;
	}

	Entity(int NID) {
		entity_ID = NID;
		std::cout << entity_ID << std::endl;
	}
};

// 类默认是private
class Player
{
public:
	int ID;
	int speed;
	std::string name;
	Entity e; // 这里声明了一个Entity对象，默认调用默认构造函数

	Player() 
		: ID(0), speed(0), name("Unknown") // 成员初始化列表，需按照类定义的顺序初始化
	{
		// 如果不使用成员初始化列表，在构造函数中初始化成员变量，会重复初始化
		e = Entity(8); // 调用默认构造函数初始化，会发现创建了两个Entity对象，因为默认构造函数也会调用一次，使用成员初始化列表可以避免这种情况
	}

	//通常使用的入参构造函数
	Player(const std::string& Nname)
		: ID(0), speed(0)
	{
		name = Nname;
	}

	void Modify(int NID, int Nspeed)
	{
		ID = NID;
		speed = Nspeed;
	}

	// 三元运算符，如果ID大于10，则speed为10，否则为5
	void SetSpeed(int& N_ID) {
		speed = N_ID > 10 ? 10 : 5 ;
		// 三元运算符嵌套,如果大于10，执行另一个三元运算符，否则为5，如果大于20，则为20，否则为10
		speed = N_ID > 10 ? N_ID > 20 ? 20 : 10 : 5 ;
	}
};

// 结构体默认为public
struct Point {
	int x;
	int y;
};

void testModify() {
	Player player;
	player.Modify(3, 1);
	std::cout << "ID:" << player.ID << "speed:" << player.speed << std::endl;
	std::cin.get();
}