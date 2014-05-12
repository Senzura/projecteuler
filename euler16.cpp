/*
 
Power digit sum
Problem 16

215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?

*/
#include <iostream>
#include <string>
#include "largePower.hpp"
#include "strIntSum.hpp"

int main()
{
	int n;
	int power;

	printf("Input a number and a power to raise it to \n");
	printf("This program will calculate sum of the digits of the");
	printf("result \n");
	
	printf("Input the integer \n");
	std::cin >> n;
	
	printf("\nInput the power \n");
	std::cin >> power;
	
	// Sends n and power to get comouted
	std::string resultString = largePower(n, power); 
	
	printf("\nThe sum of it's digits is %d", strIntSum(resultString));
	
	return 0;
}

