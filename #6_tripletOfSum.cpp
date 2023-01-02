#include <iostream>
using namespace std;

void pairSum(int Arr[], int size, int finalSum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            for (int k = (j + 1); k < size; k++)
            {
                int add = Arr[i] + Arr[j] + Arr[k];
                if (finalSum == add)
                {
                    cout << Arr[i] << " + " << Arr[j] << " + " << Arr[k] << " = " << finalSum << endl;
                    break;
                }
            }
        }
    }
}

int main()
{
    int Arr[] = {1, 2, 3, 4, 5};
    pairSum(Arr, 5, 12);
}