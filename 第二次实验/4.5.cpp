#include<iostream>
#include<string.h>
using namespace std;
int indexOf(const char s1[], const char s2[]);
int main()
{
	char s1[100];
	char s2[100];
	cout << "输入第一个字符串" << endl;
	cin.get(s1, 100);
	cin.ignore(1024, '\n');
	cout << "输入第二个字符串" << endl;
	cin.get(s2, 100);
	indexOf(s1, s2);
}
int indexOf( const char s1[], const char s2[])
{
	int index[50];
	int idx = 0;
	int lenth1 = strlen(s1);
	int lenth2 = strlen(s2);
	for (int i = 0; i < lenth2; i++)
	{
		int conum = 0;
		for (int j = 0; j < lenth1; j++)
		{
			if (s2[i + j] == s1[j])
			{
				conum++;
			}
		}
		if (conum == lenth1)
		{
			index[idx] = i + 1;
			idx++;
		}
	}
	if (idx == 0)
	{
		cout<<-1<<endl;
	}
	else if (idx > 0)
	{
		for (int i = 0; i < idx; i++)
		{
			cout << index[i] << " ";
		}
	}
	return 0;
}