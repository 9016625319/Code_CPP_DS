#include <iostream>
using namespace std;

int main()
{
    int Num1, Num2;
    cout << "Enter First Number: ";
    cin >> Num1;
    cout << "Enter Second Number: ";
    cin >> Num2;

    char operation;
    cout << "Enter Operation: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << Num1 << " + " << Num2 << " = " << (Num1 + Num2) << endl;
        break;
    case '-':
        cout << Num1 << " - " << Num2 << " = " << (Num1 - Num2) << endl;
        break;
    case '*':
        cout << Num1 << " * " << Num2 << " = " << (Num1 * Num2) << endl;
        break;
    case '/':
        cout << Num1 << " / " << Num2 << " = " << (float)Num1 / Num2 << endl;
        break;
    case '%':
        cout << Num1 << " % " << Num2 << " = " << (Num1 % Num2) << endl;
        break;
    default:
        cout << "Please enter a valid Expression";
        break;
    }
}