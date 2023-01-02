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

void insertionSort(int Arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int Element = Arr[i];
        int leftIndex = i - 1;
        while (leftIndex >= 0)
        {
            if (Arr[leftIndex] > Element)
            {
                Arr[leftIndex + 1] = Arr[leftIndex];
            }
            else
            {
                break;
            }
            leftIndex--;
        }
        Arr[leftIndex + 1] = Element;
    }
}

int main()
{
    // int Arr[] = {40, 30, 20, 10, 9, 8, 7, 1};
    int Arr[] = {6, 2, 8, 4, 10};
    // int Arr[] = {45, 90, 98, 100};
    int size = sizeof(Arr) / sizeof(int);
    cout << "Array = ";
    printArray(Arr, size);
    insertionSort(Arr, size);
    cout << "Sorted Array = ";
    printArray(Arr, size);
}

/*
Explaination
Array = 4 12 11 20
First I = 1 & leftIndex = I - 1 = 0 & Element = Arr[1] = 12
            loop 12 < 4 ==> No then Break Loop ==> 4 12 11 20
Second I = 2 & leftIndex = I  - 1 = 1 & Element = Arr[2] = 11
            loop 11 < 12 ==> Yes then Arr[2] = Arr[1] is ==> 4 12 12 20 Loop
            loop 11 < 4 ==> No then Break Loop
            Arr[1] = 11 ==> 4 11 12 20
Third I = 3 & leftIndex = I - 1 = 2 & Element = Arr[3] = 20
            loop 20 < 12 ==> No then Break Loop
*/