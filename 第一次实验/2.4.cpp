#include<iostream>
using namespace std;
int main() 
{
	char m;
	float a, b,r;
	cout << "输入一个符号来选择运算方式" << endl;
	cin >> m;
	if (m == '+')
	{
		cout << "输入两个数来开始运算" << endl;
		cin >> a;
		cin >> b;
		r = a + b;
		printf("%.2f", r);
	}
	if (m == '-')
	{
		cout << "输入两个数来开始运算(前减后)" << endl;
		cin >> a;
		cin >> b;
		r = a - b;
		printf("%.2f", r);
	}
	if (m == '*')
	{
		cout << "输入两个数来开始运算" << endl;
		cin >> a;
		cin >> b;
		r = a * b;
		printf("%.2f", r);
	}
	if (m == '/')
	{
		cout << "输入两个数来开始运算" << endl;
		cin >> a;
		cin >> b;
		if (b == 0)
		{
			cout << "分母不为零!" << endl;
		}
		else
		{
			r = a / b;
			printf("%.2f", r);
		}
	}

}