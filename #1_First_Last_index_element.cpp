#include <iostream>
using namespace std;
int firstOccurence(int Arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (key == Arr[mid])
        {
            ans = mid;
            end = end - 1; // left jao taki left me kitne key he ae pata chale
        }

        if (key > Arr[mid])
        {
            start = mid + 1;
        }
        else if (key < Arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int lastOccurence(int Arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (key == Arr[mid])
        {
            ans = mid;
            start = mid + 1; // Right jao taki Right me kitne key he ae pata chale
        }
        if (key > Arr[mid])
        {
            start = mid + 1;
        }
        else if (key < Arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

void findOccurence(int Arr[], int size, int key)
{
    cout << "first index is: " << firstOccurence(Arr, size, key) << " & last index is: " << lastOccurence(Arr, size, key) << endl;
}
int main()
{
    int Arr[] = {1, 2, 3, 3, 3, 3, 4, 5};
    int size = sizeof(Arr) / sizeof(int);
    findOccurence(Arr, size, 3); // ==> Total Number of Occurence = (lastOcc - firstOcc) + 1
}