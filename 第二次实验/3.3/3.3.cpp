#include<iostream>
#include"mytempretrue.h"
using namespace std;
int main()
{
	double cel = 0;
	double fah = 0;
	cout << "�������϶ȣ�" << endl;
	cin >> cel;
	cout << "���뻪�϶ȣ�" << endl;
	cin >> fah;

	cout << "celsius" << "  " << "fahrenheit" << endl;
	cout << cel << "     " << celsius_to_fah(cel) << endl;
	cout << "fahrenheit" << "  " << "celsius" << endl;
	cout << fah << "     " << fahrenheit_to_cels(fah) << endl;
}