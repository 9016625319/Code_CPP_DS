#include <iostream>
using namespace std;

void printArray(int Arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << "\t";
    }
    cout << endl;
}

void bubbleSort(int Arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool isSwapped = true;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                swap(Arr[j], Arr[j + 1]);
                isSwapped = false;
            }
        }
        if (isSwapped)
        {
            break;
        }
    }
}

int main()
{
    // int Arr[] = {40, 30, 20, 10, 9, 8, 7, 1};
    int Arr[] = {6, 2, 8, 4, 10};
    // int Arr[] = {45, 90, 98, 100};
    int size = sizeof(Arr) / sizeof(int);
    printArray(Arr, size);
    bubbleSort(Arr, size);
    printArray(Arr, size);
}