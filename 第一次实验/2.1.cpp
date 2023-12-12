#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		char i;
		cout << "输入一个字母" << endl;
		cin >> i;
		if (islower(i))
			{
				cout <<char(toupper(i));
			}
		else
			{while(1)
				{
					cout << "输入新的字符 后续将输出其ASCII码" << endl;
					cin >> i;
					cout << i+1<<endl;
				}
				
			}
	}
}