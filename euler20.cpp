/*2
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100! */

#include <iostream>
#include <string>
#include "strFactorial.hpp"
#include "strIntSum.hpp"

int main()
{
   unsigned n;
   //holds the facotiral a string
   std::string factAsString;
   
   printf("Input a number to find the sum of the digits of it's factorial \n");
   std::cin >> n;

//prevents me from haviing to to through the other function for every element
//of the string
   factAsString = strFactorial(n);
   std::cout <<  factAsString << std::endl;
   
   int factSum = strIntSum(factAsString);
   
   std::cout << factSum;
   return 0;
}
