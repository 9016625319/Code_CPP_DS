#include <iostream>
using namespace std;
void update(int Arr[], int size)
{
    cout << "In update Function Arr is :";
    for (int i = 0; i < size; i++)
    {
        Arr[i] = 120 + i;
        cout << Arr[i] << "   ";
    }
    cout << endl;
}
int main()
{
    int Arr[3] = {1, 2, 3};
    update(Arr, 3);

    cout << "In Main Block Arr is :";
    for (int i = 0; i < 3; i++)
    {
        cout << Arr[i] << "   ";
    }
    cout << endl;
}