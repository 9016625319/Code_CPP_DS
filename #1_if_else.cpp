#include <iostream>
using namespace std;

int main()
{
    /*
    int A;
    cout << "Enter A: ";
    cin >> A;
    if (A >= 0)
    {
        cout << "A is Positive" << endl;
    }
    else
    {
        cout << "A is Negative" << endl;
    }
    */
    /*
     int a, b;
     cout << "Enter the value of A: ";
     cin >> a;
     cout << "Enter the value of B: ";
     cin >> b;
     if (a > b)
     {
         cout << "A is Greater" << endl;
     }
     if (b > a)
     {
         cout << "B is Greater" << endl;
     }
    */

    /*
    int a;
    cout << "Enter A: ";
    cin >> a;

    if (a > 0)
    {
        cout << "A is Positive" << endl;
    }
    else
    {
        if (a < 0)
            cout << "A is Negative" << endl;
        else
            cout << "A is Zero" << endl;
    }
    */
    /*
        int a;
        cout << "Enter A: ";
        cin >> a;

        if (a > 0)
        {
            cout << "A is Positive" << endl;
        }
        else if (a < 0)
        {
            cout << "A is Negative" << endl;
        }
        else
        {
            cout << "A is Zero" << endl;
        }
    */

    char ch;
    cout << "Enter Character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lower Case" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Upper Case" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Numeric" << endl;
    }
}