// Swap alternate
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
int binarySearch(int Arr[], int size, int key)
{
    int start = 0, end = (size - 1);
    int mid = start + ((end - start) / 2); //==> mid = (start + end) / 2;
    
    while (start <= end)
    {
        if (Arr[mid] == key)
        {
            return mid;
        }
        if (key > Arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2); // ==> mid = (start + end) / 2;
        // cout << start << "  " << end << "  " << mid << endl;
    }
    return -1;
}
int main()
{
    // Binary Search time Complexity is O(logN)
    int Arr[] = {10, 12, 23, 45}; // => {2,1,4,3,5}
    // int Arr[] = {10, 12, 23, 45,65}; // => {2,1,4,3,5}
    int size = sizeof(Arr) / sizeof(int);
    printArray(Arr, size);
    cout << "key 10 found in " << binarySearch(Arr, size, 10) << " index" << endl;

    // cout << 4 + ((5 - 4) / 2) << endl;
    // cout << (4 + 5) / 2 << endl;
    // cout << (4 / 2) + (5 / 2);
}