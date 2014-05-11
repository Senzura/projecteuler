#include <gmpxx.h>
#include <gmp.h>
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

/*
 * Computes the factorial of a number and returns it as a string
 */

//I know its bad practise but its the only way that it would compile
using namespace std;

string strFactorial(unsigned int n)
{
	//just does a normal loop if the reqested factorial is low enough
	if(n <= 20)
	{
		unsigned long long product = 1;
		for(unsigned i = 1; i <= n; i++)
		{
			product *= i;
		}
		return std::to_string(product);
	}
	else
	{
		//creates the mpz_class of type n (int)
		mpz_class result(n);
		string returnString;
		
		//creates a stream that we use later to return the result
		stringstream ss (stringstream::in | stringstream:: out);
		
		//multiples result times in as n spporaches 1
		while( n --> 1)
		{
			result *=n;
		}
		
		//streasms the mpz_class version to ss then streams them out to returnString
		ss << result;
		ss >> returnString;
		return returnString;
	}
	

}

