#include <stdio.h>

int fibonacci(int num)
{
	if ((num == 0) || (num == 1))
		return num;
	else
		return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
	int n = 20;
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", fibonacci(i));
	}
	printf("\n");
	system ("PAUSE");
	return 0;
}
