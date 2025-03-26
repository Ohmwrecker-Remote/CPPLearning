#include "stdafx.h"

//���麯���������ڽӿڣ��������ʵ��
class Printable {
public:
	//���麯�����������ʵ�ָú����������޷�ʵ����
	virtual std::string getClassName() = 0;
};

//����
class Entity : public Printable {
public:
	//ʹ���麯�������������д
	virtual std::string getName() { return "Entity"; };
	//ʵ�ָ���Ĵ��麯��
	std::string getClassName() { return "class name is Entity"; }
};

//�����࣬�Ѿ��̳��˻���ʵ�ֵĴ��麯��
class Player : public Entity {
private:
	//�ַ�����Ա����
	std::string m_name;
public:
	//���const���η��Է�ֹ�޸ĳ�Ա����
	Player(const std::string name) : m_name(name) {}
	//��д������麯���������override�������Ƿ���д�����Բ�д��������
	std::string getName() override { return m_name; }
	//ʵ�ִ��麯���������ʵ�֣����ཫ�޷�ʵ���������������д����Դ��麯����ʵ�֣����øú��������൱�ڵ��û����ʵ�֣��������������ʵ��
	std::string getClassName() override { return "class name is Player"; }
};

class A : public Printable {
public:
	std::string getClassName() { return "class name is a"; }
};

//��ӡ�����Ϣ
//��Ϊ���ļ���include�ķ�ʽ��Main�������������û����Ӿ�̬���η�����Ϊ���ļ���Main�ļ��ж���ͬ���ĺ������ᵼ�����Ӵ���
//��ˣ���Ҫ��Ӿ�̬���η�
static void PrintClassName(Printable* p) {
	std::cout << p->getClassName() << std::endl;
}
