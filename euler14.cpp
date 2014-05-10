/* The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
Although it has not been proved yet (Collatz Problem), 
it is thought that all starting numbers finish at 1.CCC2

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million. */
#include <iostream>
#include <vector> 
#include <algorithm>

/*
 * Basically everything in this solution is a unsinged long long
 * because theres a singler itneger that breaks and goes negative
 */
 

//holds number that have already been through hailstone
//Still not sure how to implement it, I'll figure it out
std::vector<int> hailstoneCache; 

// This function advances a term to the next in the sequence
unsigned long long hailstone(unsigned long long n)
{
	if(n % 2 == 0)
	{
		return (n/2);
	}
	else
	{
		return ((3*n)+1);
	}
}

//This function counts the amoun of times hailstone has to be called before
//The number hits 1
unsigned long long hailstoneSqnCnt(int x)
{
	unsigned long long currentNum = x;
	//starts at one to account for the integer 1 that is in all sequences
	int count = 1;
	
	while(currentNum != 1)
	{
		currentNum = hailstone(currentNum);
		count++;
	}
	return count;
}
int main()
{
	
	// holds the currently longest sequence
	unsigned long long largestSqn = 999999;
	unsigned long long hailstoneLth = 0;
	unsigned long long largestLth = 0;
	
	
	for(unsigned long long i=999999; i>=1; i--)
	{
		hailstoneLth = hailstoneSqnCnt(i);
		//checks if it the number is in the vector first
		if(hailstoneLth > largestLth)
		{
			largestSqn = i;
			largestLth = hailstoneLth;
		}
	}
	std::cout << largestSqn;
	return 0;
}
