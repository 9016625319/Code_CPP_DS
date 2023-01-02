#include <iostream>
using namespace std;
bool isPrime(int N)
{
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int Number;
    cout << "Enter Number: ";
    cin >> Number;

    if (isPrime(Number))
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not A Prime Number" << endl;
    }
}