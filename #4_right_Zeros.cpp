#include <iostream>
#include <vector>
using namespace std;

void print(int v[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}

void Question(int v[], int size)
{
    int nonZero = 0;
    for (int j = 0; j < size; j++)
    {
        if (v[j] != 0)
        {
            swap(v[j], v[nonZero]);
            nonZero++;
        }
    }
}

int main()
{
    int v[] = {0, 1, 0, 3, 12};
    print(v, 5);
    Question(v, 5);
    print(v, 5);
}