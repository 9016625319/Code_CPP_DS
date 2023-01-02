#include <iostream>
using namespace std;

void pairSum(int Arr[], int size, int finalSum)
{
    for (int i = 0; i < size; i++)
    {
        int sum = Arr[i];
        for (int j = (i + 1); j < size; j++)
        {
            int add = Arr[j];
            add = add + sum;
            // cout << add << "  ";
            if (finalSum == add)
            {
                cout << min(Arr[i], Arr[j]) << " + " << max(Arr[i], Arr[j]) << " = " << finalSum << endl;
                break;
            }
        }
    }
}
int main()
{
    int Arr[] = {2, -3, 3, 3, -2};
    pairSum(Arr, 5, 0);
}