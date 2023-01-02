#include <iostream>
using namespace std;

void printIntersection(int Arr1[], int Arr2[], int size1, int size2)
{
    int i = 0, j = 0, a = 0;
    while (i < size1 && i < size2)
    {
        if (Arr1[i] == Arr2[j])
        {
            Arr1[i] = INT_MIN;
            cout << Arr2[j] << "  ";
            j++;
            i++;
        }
        else if (Arr1[i] < Arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int Arr1[] = {1, 2, 2, 2, 3, 4};
    int Arr2[] = {2, 2, 2, 3, 3};
    int size1 = sizeof(Arr1) / sizeof(int);
    int size2 = sizeof(Arr2) / sizeof(int);
    printIntersection(Arr1, Arr2, size1, size2);
}