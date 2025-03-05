# include <iostream>
# include <string>

//����
class Entity {
public:
	//ʹ���麯�������������д
	virtual std::string GetName() { return "Entity"; };
};

class Player : public Entity {
private:
	//�ַ�����Ա����
	std::string m_name;
public:
	//���const���η��Է�ֹ�޸ĳ�Ա����
	Player(const std::string name) : m_name(name) {}
	//��д������麯���������override�����ִ���
	std::string GetName() override { return m_name; }
};