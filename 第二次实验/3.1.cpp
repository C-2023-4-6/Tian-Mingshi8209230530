#include<iostream>
using namespace std;
int common_multiple(int a, int b) 
{
	int c;
	if (a > b)
	{
		c = b;
		while (1)
		{
			if (a % c == 0 && b % c == 0)
			{
				cout << "���Լ��Ϊ" << c << endl;
				break;
			}
			else
			{
				c -= 1;
			}
		}
	}
	else
	{
		c = a;
		while (1)
		{
			if (a % c == 0 && b % c == 0)
			{
				cout << " ���Լ��Ϊ" << c << endl;
				break;
			}
			else
			{
				c -= 1;
			}
		}
	}
	return 0;

}
int main() 
{
	int a, b, c;
	cout << "��������������" << endl;
	cin >> a; cin >> b;
	if (a > b)
	{
		c = a;
		while (1)
		{
			if (c % a == 0 && c % b == 0)
			{
				cout << "��С������Ϊ" << c << endl;
				break;
			}
			else
			{
				c += 1;
			}
		}
	}
	else
	{
		c = b;
		while (1)
		{
			if (c % a == 0 && c % b == 0)
			{
				cout << " ��С������Ϊ" << c << endl;
				break;
			}
			else
			{
				c += 1;
			}
		}
	}
	common_multiple(a, b);
}