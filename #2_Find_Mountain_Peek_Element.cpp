#include <iostream>
using namespace std;

void findPeek(int Arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = 0;
    while (start < end)
    {
        if (Arr[mid] < Arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + ((end - start) / 2);
        ans = end;
    }
    cout << ans << endl;
}
int main()
{
    int Arr[] = {0, 1, 2, 3, 2, 1};
    findPeek(Arr, 6);
}