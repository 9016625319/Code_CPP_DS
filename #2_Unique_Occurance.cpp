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

bool uniqueElement(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (Arr[j] == Arr[i] && j != i)
            {
                return false;
            }
        }
    }
    return true;
}
bool uniqueOccrance(int Arr[], int size)
{
    int count[size];
    int Size = 0, index = 0;
    for (int i = 0; i < size; i++)
    {
        int occurance = Arr[i], Number = 0;
        if (Size > size)
        {
            break;
        }
        if (occurance == INT_MIN)
        {
            continue;
        }
        count[index] = Number;
        for (int j = i; j < size; j++)
        {
            if (Size > size)
            {
                cout << "Break";
                break;
            }
            if (Arr[j] == occurance)
            {
                if (Arr[j] == INT_MIN)
                {
                    continue;
                }
                Arr[j] = INT_MIN;
                Number = Number + 1;
                count[index] = Number;
                Size = Size + 1;
            }
        }
        index++;
    }
    return uniqueElement(count, index);
}

int main()
{
    // 0 1 3 6
    // int Arr[] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    // int Arr[] = {1, 2, 2, 1, 1, 3};
    int Arr[] = {1, 2, 3, 2, 3, 3, 4, 3, 4, 4};
    int size = sizeof(Arr) / sizeof(int);

    if (uniqueOccrance(Arr, size))
    {
        cout << "Yes its Unique Array";
    }
    else
    {
        cout << "No its Not an Unique Array";
    }
}