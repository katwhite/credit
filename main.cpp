#include "pch.h"
#include "psystem.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
	Pnumber a(1001, 8), b(617), c(1001, 16);

	cout << "a = " << a << ", b =  " << b << ", c =  " << c << endl;

	cout << "a = " << a.ptoten(a) << endl;

	cout << "b = " << b.tentop(8);
	
	cout << "c+b = " << b.sum(c, 8);

	cout << "c = " << c.ptoten(c).tentop(8);

	/*
	cout << "a=" << a << " b=" << b << " a+b=" << a + b << endl;
	cout << "a(" << a << ") -= b(" << b << ")=";
	a -= b;
	cout << a << endl;
	cout << "a=" << a << " b=" << b << " a-b=" << a - b << endl;
	cout << "a(" << a << ") *= b(" << b << ")=";
	a *= b;
	cout << a << endl;
	Rational c = 3;
	cout << "b=" << b << " c=" << c << " b/c=";
	b /= c;
	cout << b << endl;
	Rational e(7, 8), f(5, 12);
	cout << "e=" << e << " f=" << f << " e+f=?" << endl;
	cout << "Enter the result g=m/n : m n" << endl;
	Rational g;
	//cin >> g;
	//if (e + f != g)
		//cout << "wrong! e+f=" << e + f << endl;
	//else
		//cout << "Right!" << endl;

	double r = 0.24;
	Rational x(3, 10);
	cout << "x=" << x << " r=" << r << " x+=r";
	x += r;
	cout << x << endl;
	cout << "x-=r ";
	x -= r;
	cout << x << endl;
	cout << "x*=r ";
	x *= r;
	cout << x << endl;
	cout << "x/=r ";
	x /= r;
	cout << x << endl;

	Rational p(1, 1);
	double t = 50.5005;//0.505005
	cout << "p=" << p << " t=" << t << " e+f=?" << endl;
	cout << "Enter the result h=m/n : m n" << endl;
	Rational h;
	cin >> h;
	if (p + t != h)
		cout << "wrong! p+t=" << p + t << endl;
	else
		cout << "Right!" << endl;
		*/
	return 0;
}
