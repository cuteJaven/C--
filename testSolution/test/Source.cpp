#include <iostream>
using namespace std;

class Person
{
public:
	void get()
	{
		cout << m_age << endl;
		cout << m_id << endl;
	}
	//�޲ι��캯��
	Person()
	{
		cout << "�޲�" << endl;
	}
	//�вι��캯��
	Person(int age, int id)
	{
		m_age = age;
		m_id = id;
		cout << "�в�" << endl;
	}
	//�������캯������������Ϸ�й������
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "����" << endl;
	}

	~Person()
	{
		cout << "����" << endl;
	}

	Person& operator=(const Person& p)
	{
		cout << "��ֵ���캯��" << endl;
	}
private:
	int m_age = 0;
	int m_id = 1;
};
//���캯�������ж��(����)����ֻ����һ��������
Person test()
{
	Person p2 = Person(10, 8);
	cout << &p2 << endl;
	return p2;
}
int main()
{
	Person p1 = test();
	cout << &p1 << endl;
	return 0;
}

