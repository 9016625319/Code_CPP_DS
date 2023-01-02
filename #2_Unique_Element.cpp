/* Find Unique Number */
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
void findUnique(int Arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ^ " << count;
        count = Arr[i] ^ count;
        cout << " = " << count << endl;
    }
    cout << count << "  ";
    // return count;
}
int main()
{
    int Arr[7] = {2, 3, 1, 1, 3, 6, 2};
    cout << "Arr = ";
    printArray(Arr, 7);
    // cout <<
    findUnique(Arr, 7);
}