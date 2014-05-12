
// Quite a few problems ask for the num of digits of a long integer
// So heres a function for it

#include <string>

int strIntSum(std::string strNumber)
{
	int sum = 0;
	for(char c : strNumber)
	{
		sum += (c - '0');
	}
	
	return sum;
}  
