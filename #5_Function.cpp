#include <iostream>
using namespace std;

// void power(int a, int b)
void power()
{
    int a, b, Answer = 1;
    cout << "Enter Number: ";
    cin >> a;
    cout << "Enter Power: ";
    cin >> b;

    for (int i = 1; i <= b; i++)
    {
        Answer = Answer * a;
    }
    cout << a << " ^ " << b << " = " << Answer << endl;
}

bool isEven(int Num)
{
    if (Num % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    // pow(a, b);
    // int a, b, Answer = 1;
    // cout << "Enter Number: ";
    // cin >> a;
    // cout << "Enter Power: ";
    // cin >> b;

    // for (int i = 1; i <= b; i++)
    // {
    //     Answer = Answer * a;
    // }
    // cout << a << " ^ " << b << " = " << Answer << endl;
    // // power(a, b);
    // power();

    cout << "2 = " << isEven(2) << endl;
}