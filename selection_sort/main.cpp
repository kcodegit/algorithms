//
//  main.cpp
//  SelectionSort
//
//  Created by Kohei Ando on 2019/05/23.
//  Copyright © 2019 Kohei Ando. All rights reserved.
//

#include <iostream>

void trace(int arr[], int n);
void selectionSort(int arr[], int n);

int main(int argc, const char *argv[])
{
	int arr[6] = {29, 5, 523, 6, 1, 5};

	trace(arr, 6);
	selectionSort(arr, 6);

	return 0;
}

void trace(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(" ");
		}
		printf("%d", arr[i]);
	}
	printf("\n");
}

void selectionSort(int arr[], int n)
{
	int min;
	for (int i = 0; i < n; i++)
	{
		min = i;
		printf("arr[i]: %d\n", arr[i]);
		for (int j = i + 1; j < n; j++)
		{
			printf("arr[j]: %d\n", arr[j]);
			printf("arr[min]: %d\n", arr[min]);
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}

		if (i != min)
		{
			std::swap(arr[i], arr[min]);
			trace(arr, 6);
		}
	}
	trace(arr, 6);
}
