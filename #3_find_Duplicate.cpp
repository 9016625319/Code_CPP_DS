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

int findDuplicates(int Arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ Arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    // int Arr[] = {4, 2, 1, 3, 1};
    int Arr[] = {1, 2, 1, 3, 4, 5, 6};
    int size = sizeof(Arr) / sizeof(int);
    printArray(Arr, size);
    cout << findDuplicates(Arr, size) << endl;
}