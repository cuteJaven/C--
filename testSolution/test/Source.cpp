#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "�����ǹ��캯��" << endl;
	}
	~Person()
	{
		cout << "��������������" << endl;
	}
};
int main()
{
	Person p1;
	return 0;
}

