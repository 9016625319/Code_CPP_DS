#include <iostream>
using namespace std;

bool isPossible(int Arr[], int size, int number_of_student, int mid)
{
    int student_count = 1;
    int page_sum = 0;

    for (int i = 0; i < size; i++)
    {
        if ((page_sum + Arr[i]) <= mid)
        {
            page_sum += Arr[i];
        }
        else
        {
            student_count++;
            if ((student_count > number_of_student) || Arr[i] > mid)
            {
                return false;
            }
            page_sum = Arr[i];
        }
    }
    return true;
}
void bookAllocation(int Arr[], int size, int number_of_student)
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
        if (isPossible(Arr, size, number_of_student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        // cout << start << "\t" << mid << "\t" << end << "\t" << ans << endl;
        mid = start + ((end - start) / 2);
    }
    cout << ans << endl;
}

int main()
{
    // int Arr[] = {10, 20, 30, 40};
    int Arr[] = {12, 34, 67, 90};
    int size = sizeof(Arr) / sizeof(int);
    bookAllocation(Arr, size, 2);
}