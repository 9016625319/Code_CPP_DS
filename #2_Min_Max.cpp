#include <iostream>
using namespace std;

void printArray(int Arr[], int size)
{
    cout << "Printing the Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Arr[" << i << "] = " << Arr[i] << endl;
    }
    cout << endl;
}
int getMin(int Arr[], int size)
{
    int Min = Arr[0];
    for (int i = 0; i < size; i++)
    {
        if (Min > Arr[i])
        {
            Min = Arr[i];
        }
    }
    return Min;
}
int getMax(int Arr[], int size)
{
    int Max = Arr[0];
    for (int i = 0; i < size; i++)
    {
        if (Max < Arr[i])
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int Arr[] = {4, -2, -19, 8, 10};
    printArray(Arr, sizeof(Arr) / sizeof(int));
    cout << "Minimum is " << getMin(Arr, 5) << endl;
    cout << "Maximum is " << getMax(Arr, 5) << endl;
}