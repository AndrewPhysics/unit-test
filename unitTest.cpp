#include "unitTest.h"
#include <iostream>
#include <windows.h>
using namespace std;
unitTest::unitTest() {}
unitTest::~unitTest() {}
bool unitTest::functionToTest1(bool a, bool b, bool c, bool d)
{
	if ((a == b && b == c) && a == !d)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool unitTest::functionToTest2(bool a, bool b, bool c, bool d)//if (a && b && c && ! d)
{
	if (a == true && b == true && c == true && d == false)
	{
		return true;
	}
	else return false;
}

bool unitTest::functionToTest3(bool a, bool b, bool c, bool d) {
	if ((a && c) || (b && d)) { return true; }
	else { return false; }
}
bool unitTest::functionToTest4(bool a, bool b) {
	if (a && !b) { return true; }
	else { return false; }
}
bool unitTest::functionToTest5(bool a, bool b, bool c, bool d) {
	if (a == c && !b) { return true; }
	else { return false; }
}
bool unitTest::functionToTest6(bool a, bool b, bool c, bool d) {
	if (!a && !b && b == c) { return true; }
	else { return false; }
}
void unitTest::makeInput1(bool& a, bool& b, bool& c, bool& d, int p)
{
	switch (p)
	{
		case 0:  a = false; b = false; c = false; d = false; break;
		case 1:  a = false; b = false; c = false; d = true; break;
		case 2:  a = false; b = false; c = true;  d = false; break;
		case 3:  a = false; b = false; c = true;  d = true; break;
		case 4:  a = false; b = true;  c = false; d = false; break;
		case 5:  a = false; b = true;  c = false; d = true; break;
		case 6:  a = false; b = true;  c = true;  d = false; break;
		case 7:  a = false; b = true;  c = true;  d = true; break;
		case 8:  a = true;  b = false; c = false; d = false; break;
		case 9:  a = true;  b = false; c = false; d = true; break;
		case 10: a = true;  b = false; c = true;  d = false; break;
		case 11: a = true;  b = false; c = true;  d = true; break;
		case 12: a = true;  b = true;  c = false; d = false; break;
		case 13: a = true;  b = true;  c = false; d = true; break;
		case 14: a = true;  b = true;  c = true;  d = false; break;
		case 15: a = true;  b = true;  c = true;  d = true; break;
	}
}
void unitTest::makeInput2(bool& a, bool& b, bool& c, bool& d, int p) {
	int pC = 1;
	for (int ia = 0; ia <= 1; ia++) {
		for (int ib = 0; ib <= 1; ib++) {
			for (int ic = 0; ic <= 1; ic++) {
				for (int id = 0; id <= 1; id++) {
					if (pC == p)
					{
						if (ia == 0) {
							a = false;
						}
						else {
							a = true;
						}
						if (ib == 0) {
							b = false;
						}
						else {
							b = true;
						}
						if (ic == 0) {
							c = false;
						}
						else {
							c = true;
						}
						if (id == 0) {
							d = false;
						}
						else {
							d = true;
						}
						return;
					}
					pC++;
				}
			}
		}
	}
}
void unitTest::printInput() 
{
	bool a, b, c, d;
	for (int p = 1; p <= 16; p++)
	{
		makeInput1(a, b, c, d, p);
		cout << a << b << c << d << endl;
		cout << "----" << endl;
	}
}
