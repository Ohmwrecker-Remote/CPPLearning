#include <iostream>

// ��Ĭ����private
class Player
{
public:
	int ID;
	int speed;

	void Modify(int NID, int Nspeed)
	{
		ID = NID;
		speed = Nspeed;
	}
};

// �ṹ��Ĭ��Ϊpublic
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