#include<iostream>
using namespace std;
int main()
{
	int num[10];
	int numt[10];
	int index = 0;
	cout << "输入十个数" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cin >> num[i];
	}
	numt[index] = num[0];
	index++;
	for (int i = 0; i <= 9; i++)
	{
		int count = 0;
		for (int n = 0; n <= index; n++)
		{
			if (num[i] == numt[n])
			{
				count++;
				continue;
			}
		}
		if (count == 0)
		{
			numt[index] = num[i];
			index++;
		}
	}
	cout << "共有以下不重复数" << endl;
	for (int i = 0; i < index; i++)
	{
		cout << numt[i] << endl;
	}
}