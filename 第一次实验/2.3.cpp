#include<iostream>
using namespace std;
int main() 
{
	float a, b, c;
	float d, e, f;
	cout << "输入三个数作为三角形三边：" << endl;
	cin >> a; cin >> b; cin >> c;
	if (a - b < 0)
	{
		d = b - a;
	}
	else
	{
		d = a - b;
	}
	if (a - c < 0)
	{
		e = c - a;
	}
	else
	{
		e = a - c;
	}
	if (b - c < 0)
	{
		f = c - b;
	}
	else
	{
		f = b - c;
	}
	if (a + b > c && a + c > b && b + c > a && d < c && e < b && f < a)
	{
		cout << "可以构成三角形" << endl;
		if (a == b || a == c || b == c)
		{
			cout << "是一个等腰三角形";
		}
		else
		{
			cout << "不是等腰";
		}
	
	}
	else
	{
		cout << "不可形成三角形";
	}
}