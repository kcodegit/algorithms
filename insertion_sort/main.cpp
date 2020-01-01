//
//  main.cpp
//  InsertionSort
//
//  Created by Kohei Ando on 2019/05/22.
//  Copyright © 2019 Kohei Ando. All rights reserved.
//

#include <iostream>

void trace(int arr[], int n);
void insertionSort(int arr[], int n);

int main(int argc, const char *argv[])
{
	int a[5] = {12, 34, 65, 1, 4};

	trace(a, 5);
	insertionSort(a, 5);
	return 0;
}

void trace(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%d", arr[i]);
	}
	printf("\n");
}

void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int v = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > v)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = v;
		trace(arr, 5);
	}
}
