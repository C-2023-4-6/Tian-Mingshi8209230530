#include<iostream>
using namespace std;
bool is_prime(int num);
int main()
{
	int i = 1;
	int index = 0;
	int prime[200] = {0};
	int count = 0;
	while (1)
	{
		if (count == 200)
		{
			break;
		}
		if (is_prime(i)) 
		{
			prime[index] = i;
			i++;
			index++;
			count++;
		}
		else 
		{
			i++;
		}
	}
	for (int i = 1; i <= 200; i++)
	{
		if (i % 10 == 0) 
		{
			cout << prime[i - 1] <<" " << endl;
		}
		else
		{
			cout << prime[i - 1]<<" ";
		}
	}
}
bool is_prime(int num)
{
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0 && num != i)
		{
			return false;
			break;
		}
		else if (num == i)
		{
			return true;
		}
	}
	
	
}