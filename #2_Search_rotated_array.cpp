#include <iostream>
using namespace std;

int getPivot(int Arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + ((end - start) / 2);
    while (start < end)
    {
        if (Arr[mid] >= Arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + ((end - start) / 2);
    }
    return start;
}

bool BinarySearch(int Arr[], int size, int key)
{
    int pivot = getPivot(Arr, size);
    int start = 0;
    int end = size - 1;
    if (key >= Arr[pivot] && key >= Arr[(size - 1)])
    {
        // cout << "Hi" << endl;
        start = pivot;
    }
    else
    {
        end = pivot;
    }
    // cout << "start = " << start << endl;
    // cout << "end = " << end << endl;
    // cout << "pivot = " << pivot << endl;
    
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (Arr[mid] == key)
        {
            // cout << mid << endl;
            return true;
        }
        if (key > Arr[start])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return false;
}
int main()
{
    // int Arr[] = {3, 4, 5, 6, 1, 2, 3, 8};
    int Arr[] = {3, 4, 5, 6, 1, 2, 3, 8};
    int size = sizeof(Arr) / sizeof(int);

    if (BinarySearch(Arr, size, 3))
    {
        cout << "Yes Exist";
    }
    else
    {
        cout << "No it's Not Exist";
    }
}