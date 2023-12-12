#include<iostream>
using namespace std;
int increase(int o,int count)
{
	if (count== 10)
	{
		return o;
	}
	else
	{
		o = (o + 1) * 2;
		increase(o,count+1);
	}
}
int main()
{
	cout << increase(1, 0);
}