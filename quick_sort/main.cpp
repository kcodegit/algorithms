//
// Quick Sort
//
#include <algorithm>
#include <iostream>

using namespace std;

void trace(int arr[], int l, int lowIndex, int highIndex)
{
  printf("low : %d and high : %d\n", lowIndex, highIndex);
  for (int i = 0; i < l; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int partition(int arr[], int lowIndex, int highIndex)
{
  int pivot = arr[highIndex];
  int partitionIndex = lowIndex;

  for (int i = lowIndex; i <= highIndex - 1; i++)
  {
    if (arr[i] < pivot)
    {
      swap(arr[partitionIndex], arr[i]);
      partitionIndex++;
    }
  }

  swap(arr[partitionIndex], arr[highIndex]);
  return partitionIndex;
}

void quickSort(int arr[], int lowIndex, int highIndex)
{
  if (lowIndex < highIndex)
  {
    int _partitionIndex = partition(arr, lowIndex, highIndex);

    quickSort(arr, lowIndex, _partitionIndex - 1);
    quickSort(arr, _partitionIndex + 1, highIndex);
  }
}

int main(int argc, const char *argv[])
{
  int arr[10] = {12, 34, 65, 1, 4, 90, 3, 15, 76, 27};
  int l = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr, 0, l - 1);

  // print
  trace(arr, l, 0, 9);
}
