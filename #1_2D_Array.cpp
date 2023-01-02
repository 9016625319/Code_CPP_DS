#include <iostream>
using namespace std;

int main()
{
    int Arr[3][4];

    // Rowwise Input
    /* for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << "Enter Arr[" << row << "][" << col << "]: ";
            cin >> Arr[row][col];
        }
    }
     */
    // Columnwise Input
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cout << "Enter Arr[" << col << "][" << row << "]: ";
            cin >> Arr[row][col];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }
}