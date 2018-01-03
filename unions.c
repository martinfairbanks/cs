/*
	Unions
	by Martin Fairbanks

	A union is similarly to structures but only holds the value of one of its data members at any one time.
	Each data member shares the same memory space and a union only occupies as much space as the largest member
*/

#include <stdio.h>

enum Colors { RED = 0xff0000, GREEN = 0x00ff00, BLUE = 0x0000ff };

union Color
{
	enum Colors colorEnum;
	unsigned int colorInt;
};


/*
	This union allows access to the same group of 4 bytes
*/
union Data 
{
	int dw;			//double word = 32 bits
	struct
	{
		short lo;	//word = 16-bits 
		short hi;	//word = 16-bits 
	} word;

	char byte[4];	//byte = 8 bits
} data;


int main()
{
	union Color myColor;

	myColor.colorEnum = RED;
	printf("%d\n", myColor.colorEnum);
	//myColor.colorInt contains the same value
	printf("%d\n", myColor.colorInt);

	data.dw = 65536;
	printf("%d\n", data.dw);
	//data.word.lo = 0;
	//data.word.hi = 1;

	printf("%d\n", data.word.hi);
	printf("%d\n", data.word.lo);
	return 0;
}