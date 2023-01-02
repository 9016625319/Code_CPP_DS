#include <iostream>
using namespace std;

int main()
{
    // int num = 1;
    char num = '1';

    switch (num)
    {
    case 1:
        cout << "First " << endl;
        break;
    case 2:
        cout << "Second " << endl;
        break;
    case '1':
        switch (num)
        {
        case '1':
            cout << "Character One" << endl;
            break;
        }
        break;
    default:
        cout << "Default Case";
        break;
    }
}