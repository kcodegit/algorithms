//
//  main.cpp
//  ShellSort
//
//  Created by Kohei Ando on 2019/05/24.
//  Copyright © 2019 Kohei Ando. All rights reserved.
//

#include <iostream>

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

void insertionSort(int arr[], int n, int g)
{
	printf("insertion g: %d\n", g);
	for (int i = g; i < n; i++)
	{
		int v = arr[i];
		int j = i - g;
		printf("INIT:: j: %d, arr[j]: %d, v: %d\n", j, arr[j], v);
		while (j >= 0 && arr[j] > v)
		{
			arr[j + g] = arr[j];
			printf("WHILE:: j: %d, arr[j]: %d, v: %d\n", j, arr[j], v);
			trace(arr, n);
			j -= g;
		}
		arr[j + g] = v;
		trace(arr, n);
	}
}

void shellSort(int arr[], int n)
{
	int m = 0;
	int s = 1;

	while ((n / s) > 0)
	{
		s *= 2;
		m++;
	}

	int G[20];

	for (int k = 0, t = 1; k < m; k++)
	{
		G[k] = n / t;
		t *= 2;
	}

	for (int i = 0; i < m; i++)
	{
		printf("G[%d]: %d\n", i, G[i]);
		insertionSort(arr, n, G[i]);
	}

	printf("m: %d\n", m);
}

int main(int argc, const char *argv[])
{
	int a[10] = {4, 23, 1, 76, 3, 109, 45, 6, 10, 98};
	shellSort(a, sizeof(a) / sizeof(a[0]));
	return 0;
}
