#include <iostream>
using namespace std;

int main()
{
    /*
    int i = 1, N, row = 1;
    cout << "Enter Row: ";
    cin >> N;

    while (row <= N)
    {
        int column = 1;
        while (column <= N)
        {
            cout << "* ";
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }

    */
    int i = 1, N, row = 1;
    cout << "Enter Row: ";
    cin >> N;

    while (row <= N)
    {
        int column = 1;
        while (column <= N)
        {
            cout << row << " ";
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}