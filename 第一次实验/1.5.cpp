#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f, C=0;
	cout << "输入华氏度" << endl;
	cin >> f;
	C = (f - 32.0) / 1.8;
	cout << "对应的摄氏度为";
	printf("%.2f", C);
	return 0;
}