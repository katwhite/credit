#include "pch.h"
#include "psystem.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

Pnumber::Pnumber() {
	number = 0;
	system = 0;
}

Pnumber::Pnumber(int num) {
	number = num;
	system = 10;
}

Pnumber::Pnumber(int n, int s) {
	number = n;
	system = s;
	int* sysnum = new int[s]; //check for errors
	for (int i = 0; i < s; i++) {
		sysnum[i] = i;
		//cout << sysnum[i] << " ";
	}
	bool flag = true;
	int a = n;
	while (a != 0) {
		int j = 0;
		while (j < s) {
			if (sysnum[j] != a % 10)
				j++;	
			else {
				flag = true;
				j = s;
			}
			a /= 10;
		}
	}
	if (flag == false) {
		cout << "error, number contains wrong system digits, your number is transfered into 10 system";
		system = 10;
	}
}

istream& operator >>(istream& in, Pnumber& r)
{
	in >> r.number >> r.system;
	return in;
}
ostream& operator <<(ostream& out, const Pnumber& r)
{
	out << r.number << " in " << r.system << " system";
	return out;
}

Pnumber Pnumber::ptoten(Pnumber a) {
	Pnumber res;
	int num = a.number;
	int n = a.number;
	
	int count = 0;
	while (n != 0) {
		n /= 10;
		count++;
	}

	int* numb = new int[count]; //число в массиве
	int i = 1;
	while (num != 0) {
		
		numb[count - i] = num % 10;
		num /= 10;
		i++;
	}

	//for (int i = 0; i < count; i++)
		//cout << numb[i] << " ";
	
	cout << endl;
	
	for (int j = count - 1; j >= 0; j--) {
		
		res.number += numb[j] * pow(a.system, j);
		
	}

	res.system = 10;
	return res;

}

Pnumber Pnumber::tentop(int s) {
	Pnumber res;
	int num = number;
	int n = number;
	
	int* mods = new int[number];

	int count = 0, i = 0;

	while (n >= s) { //заполнили остатки
		//cout << i << " ";
		mods[i] = n % s;
		//cout << mods[i];
		n /= s;
		//cout << n << endl;
		//cout << " mod " << n % s;
		count++;
		i++;
	} 
	mods[i] = n;

	//cout << count << " " << mods[0] << mods[1] << mods[2] << mods[3] << endl;

	//for (int j = count - 1; j >= 0; j--)
		//cout << mods[i] << " ";

	for (int j = count; j >= 0; j--) {

		res.number += mods[j] * pow(10, j);
	}
	res.system = s;

	return res;
}

Pnumber Pnumber::sum(Pnumber r, int sys) {
	*this = this->ptoten(*this);
	r = r.ptoten(r);
	number += r.number;
	system = system;
	//cout << " sum " << *this;
	this->tentop(sys);
	return *this;
}
