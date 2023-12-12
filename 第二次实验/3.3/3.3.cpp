#include<iostream>
#include"mytempretrue.h"
using namespace std;
int main()
{
	double cel = 0;
	double fah = 0;
	cout << "输入摄氏度：" << endl;
	cin >> cel;
	cout << "输入华氏度：" << endl;
	cin >> fah;

	cout << "celsius" << "  " << "fahrenheit" << endl;
	cout << cel << "     " << celsius_to_fah(cel) << endl;
	cout << "fahrenheit" << "  " << "celsius" << endl;
	cout << fah << "     " << fahrenheit_to_cels(fah) << endl;
}