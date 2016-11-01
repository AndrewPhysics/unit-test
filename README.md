# unit-test
this code will demostrate how to test all the possible inputs which will be passed to the function called:
functionToTest1()

makeInput1() function will generate the 2^4=16 inputs


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

