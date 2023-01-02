#include <iostream>
using namespace std;

bool LinearSearch(int Arr[], int size, int search)
{
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == search)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int Arr[] = {1, 3, 2, 4, 6, 8, 34, 32};
    bool found = LinearSearch(Arr, 8, 6);
    if (found)
    {
        cout << "Found in Array" << endl;
    }
    else
    {
        cout << "Not Found in Array" << endl;
    }
}