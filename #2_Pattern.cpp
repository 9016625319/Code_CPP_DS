#include <iostream>
using namespace std;

int main()
{
    /*
    // Que:-10.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int j = 1;
        while (j <= N)
        {
            cout << char('A' + i - 1);
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
       */

    /*
    // Que:-11.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int j = 1;
        while (j <= N)
        {
            cout << char('A' + i + j - 2);
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
       */

    /*
    // Que:-12.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + i - 1);
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
       */

    /*
    // Que:-13.
    int i = 1, N, count = 1;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + count - 1);
            count += 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
       */

    /*
    // Que:-14.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char(N - i + j + 'A' - 1);
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*
    // Que:-15.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int j = 1;
        while (j <= (N - i))
        {
            cout << "  ";
            j = j + 1;
        }

        int k = 1;
        while (k <= i)
        {
            cout << "* ";
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*
    // Que:-16.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int j = 1;
        while (j <= (N - i + 1))
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*
    // Que:-17.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int j = 1;
        while (j <= (i - 1))
        {
            cout << " ";
            j = j + 1;
        }

        int k = 1;
        while (k <= (N - i + 1))
        {
            cout << "*";
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*
    // Que:-18.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int k = 1;
        while (k <= (N - i))
        {
            cout << " ";
            k = k + 1;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }

        int l = 1;
        while (l <= (i - 1))
        {
            cout << i - l;
            l = l + 1;
        }

        cout << endl;
        i = i + 1;
    }
    */

    // /*
    // Que:-18.
    int i = 1, N;

    cout << "Enter N: ";
    cin >> N;

    while (i <= N)
    {
        int k = 1;
        while (k <= (N - i + 1))
        {
            cout << k;
            k = k + 1;
        }

        int j = 1;
        while (j <= (i - 1) * 2)
        {
            cout << "*";
            j = j + 1;
        }

        int l = 1;
        int a = N - i + 1;
        while (l <= (N - i + 1))
        {
            cout << a;
            a = a - 1;
            l = l + 1;
        }
        cout << endl;
        i = i + 1;
    }
    // * /
}