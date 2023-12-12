#include<iostream>
using namespace std;
double celsius_to_fah(double cel) 
{
	int fah = 32 + 1.8 * cel;
	return fah;
}
double fahrenheit_to_cels(double fah) 
{
	int cel = (fah - 32) / 1.8;
	return cel;
}