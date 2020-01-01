//
//  main.cpp
//  BubbleSort
//
//  Created by Kohei Ando on 2019/05/22.
//  Copyright © 2019 Kohei Ando. All rights reserved.
//

#include <iostream>
#define ARRAY_SIZE 100

void bubbleSort(int arr[], int n);
void trace(int arr[], int n);

int main(int argc, const char *argv[])
{
  int arr[ARRAY_SIZE] = {9, 4, 6, 2, 4, 1};
  trace(arr, 6);
  bubbleSort(arr, 6);
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

void bubbleSort(int arr[], int n)
{
  int flag = 1;
  int swapN = 0;

  while (flag)
  {
    flag = 0;
    for (int i = n - 1; i > 0; i--)
    {
      if (arr[i - 1] > arr[i])
      {
        std::swap(arr[i - 1], arr[i]);
        flag = 1;
        swapN++;
      }
    }
    trace(arr, n);
  }
  printf("swapped %d times", swapN);
  printf("\n");
}
