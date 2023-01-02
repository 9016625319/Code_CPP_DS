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

void selectionSort(int Arr[], int size)
{
    int min = 0;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (Arr[j] < Arr[min])
            {
                min = j;
            }
        }
        swap(Arr[i], Arr[min]);
    }
}
int main()
{
    int Arr[] = {40, 30, 20, 10, 9, 8, 7, 1};
    // int Arr[] = {90, 98, 92, 45};
    int size = sizeof(Arr) / sizeof(int);
    printArray(Arr, size);
    selectionSort(Arr, size);
    printArray(Arr, size);
}