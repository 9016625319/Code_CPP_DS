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
int main()
{
    int number[15] = {1, 2, 3};
    cout << "Number[0] = " << number[0] << endl;
    cout << "Number[1] = " << number[1] << endl;
    cout << "Number[2] = " << number[2] << endl;

    printArray(number, sizeof(number) / sizeof(int));
    // intializing a array with 0
    int N[15] = {0};
    // printArray(N, 15);
    cout << "Size of Array is " << sizeof(number) / sizeof(int) << endl;
}