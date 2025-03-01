#include <iostream>
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

void testModify() {
	Player player;
	player.Modify(3, 1);
	std::cout << "ID:" << player.ID << "speed:" << player.speed << std::endl;
	std::cin.get();
}