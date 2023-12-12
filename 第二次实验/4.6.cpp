#include<iostream>
#include<string.h>
using namespace std;
void count(const char s[], int counts[]);
int main()
{
	int counts[26] = {0};
	char s[500];
	cout << "输入一串字符" << endl;
	cin.get(s, 500);
	count(s, counts);
}
void count( const char s[], int counts[])
{
	char le[26] = { 'a','b','c' ,'d' ,'e' ,'f' ,'g' ,'h' ,'i' ,'j' ,'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z' };
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 97 || s[i] == 65)
		{
			counts[0]++;
		}
		if (s[i] == 98 || s[i] == 66)
		{
			counts[1]++;

		}
		if (s[i] == 99 || s[i] == 67)
		{
			counts[2]++;
		}
		if (s[i] == 100 || s[i] == 68)
		{
			counts[3]++;
		}
		if (s[i] == 101 || s[i] == 69)
		{
			counts[4]++;
		}
		if (s[i] == 102 || s[i] == 70)
		{
			counts[5]++;
		}
		if (s[i] == 103 || s[i] == 71)
		{
			counts[6]++;
		}
		if (s[i] == 104 || s[i] == 72)
		{
			counts[7]++;
		}
		if (s[i] == 105 || s[i] == 73)
		{
			counts[8]++;
		}
		if (s[i] == 106 || s[i] == 74)
		{
			counts[9]++;
		}
		if (s[i] == 107 || s[i] == 75)
		{
			counts[10]++;
		}
		if (s[i] == 108 || s[i] == 76)
		{
			counts[11]++;
		}
		if (s[i] == 109 || s[i] == 77)
		{
			counts[12]++;
		}
		if (s[i] == 110 || s[i] == 78)
		{
			counts[13]++;
		}
		if (s[i] == 111 || s[i] == 79)
		{
			counts[14]++;
		}
		if (s[i] == 112 || s[i] == 80)
		{
			counts[15]++;
		}
		if (s[i] == 113 || s[i] == 81)
		{
			counts[16]++;
		}
		if (s[i] == 114 || s[i] == 82)
		{
			counts[17]++;
		}
		if (s[i] == 115 || s[i] == 83)
		{
			counts[18]++;
		}
		if (s[i] == 116 || s[i] == 84)
		{
			counts[19]++;
		}
		if (s[i] == 117 || s[i] == 85)
		{
			counts[20]++;
		}
		if (s[i] == 118 || s[i] == 86)
		{
			counts[21]++;
		}
		if (s[i] == 119 || s[i] == 87)
		{
			counts[22]++;
		}
		if (s[i] == 120 || s[i] == 88)
		{
			counts[23]++;
		}
		if (s[i] == 121 || s[i] == 89)
		{
			counts[24]++;
		}
		if (s[i] == 122 || s[i] == 90)
		{
			counts[25]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << "字母" << le[i] << "有" << counts[i] << "个" << endl;
		}
	}
}