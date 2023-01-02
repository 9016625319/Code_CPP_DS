#include <iostream>
using namespace std;

void findPivot(int Arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    while (start < end)
    {
        // 1 < 2
        // 4
        // 4 + (4 - 4 /2) = 4
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
    cout << start << endl;
    cout << end << endl;
    cout << mid << endl;
}
int main()
{
    int Arr[] = {3, 8, 10, 12, 14, 1, 2, 3};
    int size = sizeof(Arr) / sizeof(int);
    findPivot(Arr, size);
}