#include <iostream>
using namespace std;

class Person
{
public:
	//�޲ι��캯��
	Person() {}
	//�вι��캯��
	Person(int age)
	{
		m_age = age;
	}
	//�������캯������������Ϸ�й������
	Person(const Person& p)
	{
		m_age = p.m_age;
	}
private:
	int m_age = 0;
};
//���캯�������ж��(����)����ֻ����һ��������
void test()
{
	Person p1;
	Person p2(10);
	Person p3(p2);
}
int main()
{
	Person p1;
	return 0;
}

