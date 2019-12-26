#pragma once
#include "pch.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

class Pnumber {

public:
	int number;
	int system;
	Pnumber();
	Pnumber(int num);
	Pnumber(int n, int p);
	Pnumber ptoten(Pnumber a);
	Pnumber tentop(int s);
	Pnumber sum(const Pnumber r, int sys);
	void simplify();
	Pnumber operator +(const Pnumber& r) const;
	Pnumber operator -(const Pnumber& r) const;
	Pnumber operator -() const;
	Pnumber& operator +=(const Pnumber& r);
	Pnumber& operator *=(const Pnumber& r);
	Pnumber& operator /=(const Pnumber& r);
	Pnumber& operator ++(); // префикс
	Pnumber operator ++(int); // постфикс
	bool operator ==(const Pnumber& r) const;
	bool operator !=(const Pnumber& r) const;
	operator int() const;
	operator double() const;

	friend istream& operator >>(istream& in, Pnumber& r);
	friend ostream& operator <<(ostream& out, const Pnumber& r);

	Pnumber& operator +=(const double& r);
	Pnumber& operator -=(const double& r);
	Pnumber& operator *=(const double& r);
	Pnumber& operator /=(const double& r);

	Pnumber operator +(const double& r) const;
	Pnumber operator -(const double& r) const;

	bool operator ==(const double& r) const;
	bool operator !=(const double& r) const;
};

#pragma once
