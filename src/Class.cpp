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

// ��Ĭ����private
class Player
{
public:
	int ID;
	int speed;
	std::string name;
	Entity e; // ����������һ��Entity����Ĭ�ϵ���Ĭ�Ϲ��캯��

	Player() 
		: ID(0), speed(0), name("Unknown") // ��Ա��ʼ���б��谴���ඨ���˳���ʼ��
	{
		// �����ʹ�ó�Ա��ʼ���б��ڹ��캯���г�ʼ����Ա���������ظ���ʼ��
		e = Entity(8); // ����Ĭ�Ϲ��캯����ʼ�����ᷢ�ִ���������Entity������ΪĬ�Ϲ��캯��Ҳ�����һ�Σ�ʹ�ó�Ա��ʼ���б���Ա����������
	}

	//ͨ��ʹ�õ���ι��캯��
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

	// ��Ԫ����������ID����10����speedΪ10������Ϊ5
	void SetSpeed(int& N_ID) {
		speed = N_ID > 10 ? 10 : 5 ;
		// ��Ԫ�����Ƕ��,�������10��ִ����һ����Ԫ�����������Ϊ5���������20����Ϊ20������Ϊ10
		speed = N_ID > 10 ? N_ID > 20 ? 20 : 10 : 5 ;
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