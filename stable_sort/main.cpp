//
//  main.cpp
//  StableSort
//
//  Created by Kohei Ando on 2019/05/24.
//  Copyright © 2019 Kohei Ando. All rights reserved.
//

#include <iostream>

struct Card
{
	char mark;
	int number;
};

void bubbleSort(struct Card arr[], int n);
void selectionSort(struct Card arr[], int n);
bool isStable(struct Card c1[], struct Card c2[], int n);

void trace(Card arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(" ");
		}
		printf("%d", arr[i].number);
	}
	printf("\n");
}

int main(int argc, const char *argv[])
{
	Card bArr[100], sArr[100];
	int N;

	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> bArr[i].mark >> bArr[i].number;
	}

	for (int i = 0; i < N; i++)
		sArr[i] = bArr[i];

	bubbleSort(bArr, N);
	selectionSort(sArr, N);

	if (isStable(bArr, sArr, N))
	{
		printf("Stable");
	}
	else
	{
		printf("Not Stable");
	}

	return 0;
}

void bubbleSort(Card arr[], int n)
{
	int flag = 1;
	int swapN = 0;

	while (flag)
	{
		flag = 0;
		for (int i = n - 1; i > 0; i--)
		{
			if (arr[i - 1].number > arr[i].number)
			{
				std::swap(arr[i - 1], arr[i]);
				flag = 1;
				swapN++;
			}
		}
		trace(arr, n);
	}
	printf("swapped %d times", swapN);
}

void selectionSort(Card arr[], int n)
{
	int swappedCount = 0;
	int min;
	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j].number < arr[min].number)
			{
				min = j;
			}
		}

		if (i != min)
		{
			std::swap(arr[i], arr[min]);
			swappedCount++;
		}
	}
	trace(arr, 6);
	printf("swapped %d times", swappedCount);
}

bool isStable(struct Card c1[], struct Card c2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (c1[i].mark != c2[i].mark)
			return false;
	}
	return true;
}
