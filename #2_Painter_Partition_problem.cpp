#include <iostream>
using namespace std;

bool isPossible(int Arr[], int size, int painter_count, int mid)
{
    int painter = 1;
    int paint = 0;
    for (int i = 0; i < size; i++)
    {
        if ((paint + Arr[i]) <= mid)
        {
            paint += Arr[i];
        }
        else
        {
            painter++;
            if (painter > painter_count || Arr[i] > mid)
            {
                return false;
            }
            paint = Arr[i];
        }
    }
    return true;
}
void painterPartition(int Arr[], int size, int painter_count)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += Arr[i];
    }
    int start = 0, end = sum;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(Arr, size, painter_count, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    cout << ans << endl;
}
int main()
{
    // int Arr[] = {10, 20, 30, 40};
    int Arr[] = {10, 10, 10, 10};
    int size = sizeof(Arr) / sizeof(int);
    painterPartition(Arr, size, 2);
}