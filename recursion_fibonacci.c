/*
	Recursive Fibonacci
	by Martin Fairbanks

	recursion - a function that is calling itself
	in general recursive functions replace loops
	recursive functions have two cases
	base case - when triggered it will terminate the recursive process
	recursive case - where the recursive call occurs

	build:
	gcc -std=c99 recursion_fibonacci.c
	cl recursion_fibonacci.c
*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num)
{
	//two base cases
	if ((num == 0) || (num == 1))
		return num;
	else
		return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(int argc, char **argv)
{
	int n = 30;

	if (argc > 1)
		n = atoi(argv[1]);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", fibonacci(i));
	}

	//non-recursive
#if 0
	puts("");
	int num = 0;
	int next = 1;
	int fib = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == 1)
		{
			printf("%d ", i);
			continue;
		}
		
		fib = num + next;
		num = next;
		next = fib;
		printf("%d ", fib);
	}
#endif

	return 0;
}
