#include <iostream>
using namespace std;

void printArr(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << "   ";
    }
    cout << endl;
}
void reverse(int Arr[], int size)
{
    /*
        for (int i = 0; i < size / 2; i++)
        {
            //  int Temp = Arr[i];
            // Arr[i] = Arr[size - i - 1];
            // Arr[size - i - 1] = Temp;
            // swap(Arr[start], Arr[end]);
        }
}
*/

    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        /*      int Temp = Arr[start];
                Arr[start] = Arr[end];
                Arr[end] = Temp;        */
        swap(Arr[start], Arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int Arr[] = {1, 3, 2, 4};
    cout << "Arr = ";
    printArr(Arr, 4);
    cout << "Reverse Arr = ";
    reverse(Arr, 4);
    printArr(Arr, 4);

    int Arr2[] = {1, 2, 3, 4, 5};
    cout << "Arr2 = ";
    printArr(Arr2, 5);
    cout << "Reverse Arr2 = ";
    reverse(Arr2, 5);
    printArr(Arr2, 5);
}