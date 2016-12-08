#include <iostream>
#include "unitTest.h"
using namespace std;
int main() {
	unitTest p1;
	p1.printInput();
	bool a, b, c, d;
	bool result[16];
	int p;
	for (p = 0; p < 16; p++)
	{
		p1.makeInput1(a, b, c, d, p);//the inputs a,b,c,d are generated
		result[p]=p1.functionToTest1(a, b, c, d);//the inputs are passed to the function which will tested
	}


	for (int i = 0; i < 16; i++)
	{
		if (result[i]==true)
		{
			cout << "true return at " << i+1 << " -th permutation" << endl;
		}
		else
		{
			cout << "error at " << i+1 << " -th permutation" << endl;
		}
	}


	system("pause");
	return 0;
}



