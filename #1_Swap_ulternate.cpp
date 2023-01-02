// Swap alternate
#include <iostream>
using namespace std;

void printArray(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << "  ";
    }
    cout << endl;
}
void swapUlternate(int Arr[], int size)
{
    // for (int i = 0; i < size / 2; i++)
    // {
    //     swap(Arr[i * 2], Arr[i * 2 + 1]);
    // }
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(Arr[i], Arr[i + 1]);
        }
    }
}
int main()
{
    int Arr[] = {1, 2, 3, 4, 5}; // => {2,1,4,3,5}
    cout << "Arr2 = ";
    printArray(Arr, 5);
    cout << "SwapUlternate Arr2 = ";
    swapUlternate(Arr, 5);
    printArray(Arr, 5);

    int Arr2[] = {1, 3, 2, 7, 11, 8}; // => {2,1,4,3,5}
    cout << "Arr2 = ";
    printArray(Arr2, 6);
    cout << "SwapUlternate Arr2 = ";
    swapUlternate(Arr2, 6);
    printArray(Arr2, 6);
}