#include <iostream>
using namespace std;
int sum(int Arr[], int size)
{
    int Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}
int main()
{
    int Arr[] = {4, 3, 4, 5, 6, 7, -9};
    cout << "Sum Of Array is " << sum(Arr, 7) << endl;
}