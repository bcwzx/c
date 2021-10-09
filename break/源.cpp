#include<iostream>
using namespace std;
int main()
{
	int age;
	//while(true/1)
	for (;;)
	{
		cout << "请输入玩家年龄：";
		cin >> age;
		if (age < 0)
		{
			cout << "输入的数据非法！！" << endl;
			break;
		}
	}
	cout << "这是强制退出后的代码！！" << endl;
}