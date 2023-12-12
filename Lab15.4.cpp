#include <iostream>
#include <stdio.h>
#define size 10

int main()
{
	int i, j, result = 0;

	int array[size];

	for (i = 0; i < size; i++) {
		printf("Enter %d number: ", i + 1);
		scanf_s("%d", &array[i]);
	}

	for (j = 0; j < size; j++) {
		result += array[j];
	}

	printf("Result: %d", result);

	return 0;
}