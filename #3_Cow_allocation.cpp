#include <iostream>
using namespace std;
bool isPossible(int Arr[], int size, int cow_count, int mid)
{
    int cowCount = 1;
    int lastpos = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] - lastpos >= mid)
        {
            cowCount++;
            if (cowCount == cow_count)
            {
                return true;
            }
            lastpos = Arr[i];
        }
    }
    return false;
}

int cowAllocation(int Arr[], int size, int cow_count)
{
    int start = 0;
    int end = Arr[0];
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] > end)
        {
            end = Arr[i];
        }
    }
    int mid = start + ((end - start) / 2);
    int ans = 0;
    while (start <= end)
    {
        if (isPossible(Arr, size, cow_count, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int main()
{
    int Arr[] = {10, 20, 30, 40};
    int size = sizeof(Arr) / sizeof(int);
    cout << cowAllocation(Arr, size, 2);
}