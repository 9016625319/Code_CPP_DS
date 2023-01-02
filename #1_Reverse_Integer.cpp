#include <iostream>
using namespace std;

int main()
{
    int Number = 123456789;
    int Answer = 0;
    while (Number != 0)
    {
        int digit = Number % 10;
        if ((Answer > INT_MAX / 10) || ((Answer < INT_MIN / 10)))
        {
            Answer = 0;
            break;
        }
        Answer = (Answer * 10) + digit;
        Number = Number / 10;
    }
    cout << "Answer = " << Answer << endl;
}