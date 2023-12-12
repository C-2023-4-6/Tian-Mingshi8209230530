#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int indexof( char(* s1)[100], char(* s2)[100])
{
	int index[50];
	int idx = 0;
	const int lenth1 = strlen(*s1);
	int lenth2 = strlen(*s2);
	char S1[100];
	char S2[100];
	memcpy(S1, *s1, lenth1);
	memcpy(S2, *s2, lenth2);
	for (int i = 0; i < lenth2; i++)
	{
		int conum = 0;
		for (int j = 0; j < lenth1; j++)
		{
			if (S2[i + j] == S1[j])
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
		cout << -1 << endl;
	}
	else if (idx > 0)
	{
		for (int i = 0; i < idx; i++)
		{
			cout << index[i] << " "<<endl;
		}
	}
	return 0;
}
int parseHex( char(* hexString)[100])
{
	int lenth = strlen(*hexString);
	int num1[100];
	int num2[100];
	int numt = 0;
	char str[100];
	memcpy(str, *hexString, lenth);
	for (int i = 0; i < lenth; i++)
	{
		if (str[i] == '1')
		{
			num1[i] = 1;
		}
		if (str[i] == '2')
		{
			num1[i] = 2;
		}
		if (str[i] == '3')
		{
			num1[i] = 3;
		}
		if (str[i] == '4')
		{
			num1[i] = 4;
		}
		if (str[i] == '5')
		{
			num1[i] = 5;
		}
		if (str[i] == '6')
		{
			num1[i] = 6;
		}
		if (str[i] == '7')
		{
			num1[i] = 7;
		}
		if (str[i] == '8')
		{
			num1[i] = 8;
		}
		if (str[i] == '9')
		{
			num1[i] = 9;
		}
		if (str[i] == 'a'||str[i]=='A')
		{
			num1[i] = 10;
		}
		if (str[i] == 'b' || str[i] == 'B')
		{
			num1[i] = 11;
		}
		if (str[i] == 'c' || str[i] == 'C')
		{
			num1[i] = 12;
		}
		if (str[i] == 'd' || str[i] == 'D')
		{
			num1[i] = 13;
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			num1[i] = 14;
		}
		if (str[i] == 'f' || str[i] == 'F')
		{
			num1[i] = 15;
		}
		if (str[i] == 'g' || str[i] == 'G')
		{
			num1[i] = 16;
		}
	}
	num2[lenth - 1] = 1;
	for (int i = 0; i < lenth-1; i++)
	{
		num2[i] = 1;
		for (int j = i; j < (lenth-1-j); j++)
		{
			num2[i] = num2[i] * 16;
		}
	}
	for (int i = 0; i < lenth; i++)
	{
		numt = numt + num1[i] * num2[i];
	}
	cout << numt << endl;
	return 0;
}
int order(int *list, int index)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 0; i < index-1; i++)
		{
			if (list[i + 1] < list[i])
			{
				double mid = list[i];
				list[i] = list[i + 1];
				list[i + 1] = mid;
				changed = true;
			}
		}
	} while (changed);
	return 0;
}
int main()
{
	char s1[100];
	char s2[100];
	cout << "输入第一个字符串" << endl;
	cin.get(s1, 100);
	cin.ignore(1024, '\n');
	cout << "输入第二个字符串" << endl;
	cin.get(s2, 100);
	cin.ignore(1024, '\n');
	char(* s1_p)[100] = &s1;
	char(*s2_p)[100] = &s2;
	indexof(s1_p ,s2_p);
	cout << "输入一个十六进制数:" << endl;
	char hex1[100];
	cin.get(hex1, 100);
	cin.ignore(1024, '\n');
	 char(*hex1_p)[100] = &hex1;
	parseHex(hex1_p);
	int list[100];
	int* list_p;
	int index = 0;
	cout << "输入数组长度:" << endl;
	cin >> index;
	list_p = new int[index];
	cout << "请按输入的个数 输入对应个数的数组元素" << endl;
	for (int i = 0; i < index; i++)
	{
		cin >> list_p[i];
	}
	order(list_p, index);
	for (int i = 0; i < index; i++)
	{
		cout << list_p[i] << endl;
	}

}