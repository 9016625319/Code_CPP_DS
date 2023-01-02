#include <iostream>
using namespace std;

int main()
{
    /*
        int i = 1, N;
        cout << "Enter N: ";
        cin >> N;
        while (i <= N)
        {
            cout << i << endl;
            i = i + 1;
        }
    */

    /*
    int i = 1, N, Sum = 0;
    cout << "Enter N: ";
    cin >> N;
    while (i <= N)
    {
        Sum = Sum + i;
        i = i + 1;
    }
    cout << "Sum = " << Sum << endl;
    */

    /*
    int i = 2, N, Sum = 0;
    cout << "Enter N: ";
    cin >> N;
    while (i <= N)
    {
        Sum = Sum + i;
        i = i + 2;
    }
    cout << "Sum = " << Sum << endl;
    */

    // /*
    int i = 2, N;
    bool Check = false;

    cout << "Enter N: ";
    cin >> N;

    while (i < N)
    {
        if (N % i == 0)
        {
            Check = true;
        }
        i = i + 1;
    }
    if (Check)
    {
        cout << "Not A Prime Number" << endl;
    }
    else
    {
        cout << "Prime Number" << endl;
    }
    // */
}