#pragma once
class unitTest
{
public:
	unitTest();
	~unitTest();
	// true ha a,b,c egyenl�ek �s d hamis, egy�bk�nt hamis
	

	bool functionToTest1(bool a, bool b, bool c, bool d);
	// ha a �s b �s c igaz de d hamis akkor az f2() igaz, egy�bk�nt hamis
	bool functionToTest2(bool a, bool b, bool c, bool d);
	// ha (a �s c) vagy (b �s d) k�z�l 
	//legal�bb az egyik igaz akkor f3() igaz egy�bk�nt hamis
	bool functionToTest3(bool a, bool b, bool c, bool d);
	//igaz, ha a igaz, de b nem igaz, egy�bk�nt hamis
	bool functionToTest4(bool a, bool b);  
	//igaz, ha a �s c egyenl�ek, de b hamis, egy�bk�nt hamis
	bool functionToTest5(bool a, bool b, bool c, bool d);
	//igaz, ha hamis az a �s a b is �s b egyenl� c-vel
	// egy�bk�nt hamis
	bool functionToTest6(bool a, bool b, bool c, bool d);


	void makeInput1(bool &a, bool &b, bool &c, bool &d, int p);

	void makeInput2(bool &a, bool &b, bool &c, bool &d, int p);

	void printInput();

	
};

