#include <iostream>
using namespace std;

int main()
{
    int Amount;
    cout << "Enter First Number: ";
    cin >> Amount;

    for (int i = 1; i <= 4; i++)
    {
        int Answer = 0;
        switch (i)
        {
        case 1:
            Answer = Amount / 100;
            cout << "100rs => " << Answer << " Notes " << endl;
            Amount = Amount - (Answer * 100);
            break;
        case 2:
            Answer = Amount / 50;
            cout << "50rs => " << Answer << " Notes " << endl;
            Amount = Amount - (Answer * 50);
            break;
        case 3:
            Answer = Amount / 20;
            cout << "20rs => " << Answer << " Notes " << endl;
            Amount = Amount - (Answer * 20);
            break;
        case 4:
            Answer = Amount / 1;
            cout << "1rs => " << Answer << " Notes " << endl;
            Amount = Amount - (Answer * 1);
            break;
        }
    }
}