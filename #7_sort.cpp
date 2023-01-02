#include <iostream>
using namespace std;

void printArray(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << "  ";
    }
    cout << endl;
}

void sort(int Arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        if (Arr[left] == 0)
        {
            left++;
        }
        else if (Arr[right] == 1)
        {
            right--;
        }
        else if ((Arr[left] == 1) && (Arr[right] == 0))
        {
            printArray(Arr, size);
            swap(Arr[left], Arr[right]);
            left++;
            right--;
        }
        else
        {
            right--;
        }
    }
    printArray(Arr, size);
}

int main()
{
    int Arr[] = {1, 1, 1, 1, 1, 0, 1, 0};
    int size = sizeof(Arr) / sizeof(int);
    printArray(Arr, size);
    sort(Arr, size);
}