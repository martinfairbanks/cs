/*
	Sorting Algorithms
	by Martin Fairbanks
*/

#include <stdio.h>
#include <time.h>
#define ARRAY_SIZE 20	


void swap(int a[], int i, int j)
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void bubbleSort(int arr[])
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		//change place if the current value is greater than the next one
		if ((i < ARRAY_SIZE - 1) && (arr[i] > arr[i + 1]))
		{
			//swap
			int tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;

			//"rewind" the loop, and start from the beginning again
			i = -1;
		}
	}
}

void selectionSort(int arr[])
{
	int min;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		min = i;
		//search for min value
		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}

		swap(arr, i, min);
	}
}

void shellSort(int arr[])
{
	for (int m = ARRAY_SIZE / 2; m > 0; m = m / 2)
	{
		for (int j = m; j < ARRAY_SIZE; j++)
		{
			for (int i = j - m; i >= 0 && arr[i]>arr[i + m]; i = i - m)
			{
				swap(arr, i, i+m);
			}
		}
	}
}

void printArray(int arr[])
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (i == ARRAY_SIZE-1)
			printf("%d.", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
}

int main()
{
	srand(time(0));
	int numbers[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
		numbers[i] = rand() % 1000;
	
	printf("Unsorted: \n");
	printArray(numbers);

	//bubbleSort(numbers);
	//selectionSort(numbers);
	shellSort(numbers);

	printf("\nSorted: \n");
	printArray(numbers);
	
	return 0;
}
