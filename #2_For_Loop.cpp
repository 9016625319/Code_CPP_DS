#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a: ";
    cin >> n;

    int a = 0, b = 1, c = 1;

    for (int i = 1; i <= n; i++)
    {
        cout << a << "\t";
        a = b;
        b = c;
        c = a + b;
    }
}