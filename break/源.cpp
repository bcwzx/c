#include<iostream>
using namespace std;
int main()
{
	int age;
	//while(true/1)
	for (;;)
	{
		cout << "������������䣺";
		cin >> age;
		if (age < 0)
		{
			cout << "��������ݷǷ�����" << endl;
			break;
		}
	}
	cout << "����ǿ���˳���Ĵ��룡��" << endl;
}