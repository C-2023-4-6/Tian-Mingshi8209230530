#include<iostream>
using namespace std;
int main()
{
	double num[10];
	cout << "输入十个数" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cin >> num[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 0; i < 9; i++)
		{
			if (num[i + 1] < num[i])
			{
				double mid = num[i];
				num[i] = num[i + 1];
				num[i + 1] = mid;
				changed = true;
			}
		}
	} while (changed);
	
	for (int i = 0; i <= 9; i++)
	{
		cout << num[i] << endl;
	}

}