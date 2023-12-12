#include<iostream>
using namespace std;
int main()
{
	float a,b[80],c;
	cout << "输入一个数" << endl;
	cin >> a;
	if (a < 0)
	{
		cout << "无平方根" << endl;
	}
	else
	{
		b[0] = a;
		for (int i = 0; fabs(b[1 + i] - b[i]) > 1e-5; ++i)
		{
			b[i + 1] = (b[i] + a / b[i]) / 2;
			c = b[i + 1];
		}
		cout << c << endl;
	}
	
}