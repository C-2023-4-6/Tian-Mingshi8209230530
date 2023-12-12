#include<iostream>
using namespace std;
int main()
{
	float a=0,d=0;
	for (int i = 2,j=1; i < 100;++j,d=j)
	{
		a = a + i * 0.8;
		i = i * 2;
		
	}
	cout << a / d;
}