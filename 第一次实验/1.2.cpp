#include<iostream>
using namespace std;
int main()
{
	float r, h, v;
	
	double  c = 3.1415926;
	cout << "请输入半径" << endl;
	cin >> r;
	cout << "请输入锥高" << endl;
	cin >> h;
	v = (c * r *r * h)*(1.0/3.0);
	cout <<"圆锥体积为" << v << endl;
}