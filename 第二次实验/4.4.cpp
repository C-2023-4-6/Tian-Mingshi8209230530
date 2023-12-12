
#include<iostream>
using namespace std;
void merge( int list1[], const int size1,  int list2[], const int size2, int list3[])
{
	int numt1[80];
	int index1 = 0;
	numt1[index1] = list1[0];
	index1++;
	for (int i = 0; i <= 9; i++)
	{
		int count = 0;
		for (int n = 0; n <= index1; n++)
		{
			if (list1[i] == numt1[n])
			{
				count++;
				continue;
			}
		}
		if (count == 0)
		{
			numt1[index1] = list1[i];
			index1++;
		}
	}
	
	
	int numt2[80];
	int index2 = 0;
	numt2[index2] = list2[0];
	index2++;
	for (int i = 0; i <= 9; i++)
	{
		int count = 0;
		for (int n = 0; n <= index2; n++)
		{
			if (list2[i] == numt2[n])
			{
				count++;
				continue;
			}
		}
		if (count == 0)
		{
			numt2[index2] = list2[i];
			index2++;
		}
	}
	int numt3[80];
	int j = index1;
	for (int i = 0; i <index1; i++)
	{
		numt3[i] = numt1[i];
	}
	for (int i = 0; i <index2; i++)
	{
		numt3[j] = numt2[i];
		j++;
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 0; i < 9; i++)
		{
			if (numt3[i + 1] < numt3[i])
			{
				int mid = numt3[i];
				numt3[i] = numt3[i + 1];
				numt3[i + 1] = mid;
				changed = true;
			}
		}
	} while (changed);
	cout << "合并且排序后的数组为：" << endl;
	for (int i = 0; i < index1 + index2; i++)
	{
		cout << numt3[i] << endl;
	}
}
int main()
{
	int list1[80];
	int list2[80];
	int list3[80];
	int size1 = 0;
	int size2 = 0;
	cout << "输入第一个数组（输入负数来结束）" << endl;
	while (1)
	{
		int mid=0;
		cin >> mid;
		if (mid >= 0)
		{
			list1[size1] = mid;
			size1++;
		}
		else 
		{
			break;
		}
	}
	cout << "输入第二个数组（输入负数来结束）" << endl;
	while (1)
	{
		int mid = 0;
		cin >> mid;
		if (mid >= 0)
		{
			list2[size2] = mid;
			size2++;
		}
		else
		{
			break;
		}
	}
	merge(list1, size1, list2, size2, list3);
}