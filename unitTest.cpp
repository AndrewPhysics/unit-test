#include "unitTest.h"
#include <iostream>
#include <windows.h>
using namespace std;


unitTest::unitTest(){}
unitTest::~unitTest(){}




bool unitTest::functionToTest1(bool a, bool b, bool c, bool d) {
	if ((a == b && b == c) && a==!d) 
	{
		return true;
	} 	
	else
	{
		return false;
	}
}
// ha a és b és c igaz de d hamis 
//akkor az f1 igaz, egyébként hamis
bool unitTest::functionToTest2(bool a, bool b, bool c, bool d) {
	if (a == true && b == true && c == true && d == false)
		//if (a && b && c && ! d)
	{
		return true;
	}
	else return false;
}
// ha (a és c) vagy (b és d) közül 
//legalább az egyik igaz akkor f2 igaz egyébként hamis
bool unitTest::functionToTest3(bool a, bool b, bool c, bool d) {
	if ((a && c) || (b && d)) { return true; }
	else { return false; }
}
//igaz, ha a igaz, de b nem igaz, egyébként hamis

bool unitTest::functionToTest4(bool a, bool b) {
	if (a && !b) { return true; }
	else { return false; }
}


//igaz, ha a és c egyenlõek, de b hamis, egyébként hamis



bool unitTest::functionToTest5(bool a, bool b, bool c, bool d) {
	if (a == c && !b) { return true; }
	else { return false; }
}
//igaz, ha hamis az a és a b is és b egyenlõ c-vel
//egyébként hamis
bool unitTest::functionToTest6(bool a, bool b, bool c, bool d) {
	if (!a && !b && b == c) { return true; }
	else { return false; }
}

void unitTest::makeInput1(bool &a, bool &b, bool &c, bool &d, int p) {
	// többszöri return-t referenciával oldom meg!!!
	switch (p)
	{
	case 0: a = false; b = false; c = false; d = false; break;
	//ez
	case 1: a = false; b = false; c = false; d = true; break;

	case 2: a = false; b = false; c = true; d = false; break;
	case 3: a = false; b = false; c = true; d = true; break;
	case 4: a = false; b = true; c = false; d = false; break;
	case 5: a = false; b = true; c = false; d = true; break;
	case 6: a = false; b = true; c = true; d = false; break;
	case 7: a = false; b = true; c = true; d = true; break;
	case 8: a = true; b = false; c = false; d = false; break;
	case 9: a = true; b = false; c = false; d = true; break;
	case 10: a = true; b = false; c = true; d = false; break;
	case 11: a = true; b = false; c = true; d = true; break;
	case 12: a = true; b = true; c = false; d = false; break;
	case 13: a = true; b = true; c = false; d = true; break;
	//meg ez

	case 14: a = true; b = true; c = true; d = false; break;
	
	case 15: a = true; b = true; c = true; d = true; break;
	}
}






void unitTest::makeInput2(bool &a, bool &b, bool &c, bool &d, int p) {
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
						return; // lezárási pontja bármely függvénynek
					}
					pC++;
				}
			}
		}
	}
}



void unitTest::printInput() {
	bool a, b, c, d;
	for (int i = 1; i <= 16; i++)
	{
		makeInput1(a, b, c, d, i);
		cout << a << b << c << d << endl;
		cout << "----" << endl;
	}
}






