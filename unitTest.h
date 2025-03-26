#pragma once
class unitTest
{
public:
	unitTest();
	~unitTest();

	void makeInput1(bool& a, bool& b, bool& c, bool& d, int p);
	void makeInput2(bool& a, bool& b, bool& c, bool& d, int p);
	void printInput();

	// true ha a,b,c egyenlőek és d hamis, egyébként hamis
	bool functionToTest1(bool a, bool b, bool c, bool d);
	// ha a és b és c igaz de d hamis akkor az f2() igaz, egyébként hamis
	bool functionToTest2(bool a, bool b, bool c, bool d);
	// ha (a és c) vagy (b és d) közül 
	//legalább az egyik igaz akkor f3() igaz egyébként hamis
	bool functionToTest3(bool a, bool b, bool c, bool d);
	//igaz, ha a igaz, de b nem igaz, egyébként hamis
	bool functionToTest4(bool a, bool b);
	//igaz, ha a és c egyenlőek, de b hamis, egyébként hamis
	bool functionToTest5(bool a, bool b, bool c, bool d);
	//igaz, ha hamis az a és a b is és b egyenlő c-vel, egyébként hamis
	bool functionToTest6(bool a, bool b, bool c, bool d);
};
