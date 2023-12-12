#include<iostream>
using namespace std;
int main()
{
	bool chest[100];
	for (int i = 0; i <= 99; i++)
	{
		chest[i] = true;
	}
	for (int s = 2; s <=100; s++)
	{
		for (int count = s-1; count <= 100; count += s)
		{
			if (chest[count] == true)
			{
				chest[count] = false;
			}
			else 
			{
				chest[count] = true;
			}
		}
	}
	for (int i = 0; i <= 99; i++)
	{
		if (chest[i] == true)
		{
			cout << i+1 << endl;
		}

	}

}