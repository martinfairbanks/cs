/*
	Recursive Greatest Common Divisor
	by Martin Fairbanks

	recursion - a function that is calling itself
	in general recursive functions replace loops
	recursive functions have two cases
	base case - when triggered it will terminate the recursive process
	recursive case - where the recursive call occurs

    the greatest common divisor (gcd) of two or more integers, which are not both zero, 
    is the largest positive integer that divides each of the integers. For example, the gcd of 8 and 12 is 4

    build:
	gcc -std=c99 recursion_gcd.c
	cl recursion_gcd.c
*/

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(int argc, char **argv)
{
    int a = 16;
    int b = 24;

    if (argc > 2)
    {
        a = atoi(argv[1]);
	    b = atoi(argv[2]);
    }
    
    printf("The greatest common divisor of %d and %d is %d\n", a, b, gcd(a,b));
	return 0;
}
