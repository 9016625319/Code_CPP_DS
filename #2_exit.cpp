#include <iostream>
using namespace std;

int main()
{
    char num = '1';
    while (1)
    {
        switch (num)
        {
        case 1:
            cout << "First " << endl;
            break;
        case 2:
            cout << "Second " << endl;
            break;
        case '1':
            cout << "Character One" << endl;
            exit(0);
            break;
        default:
            cout << "Default Case";
            break;
        }
    }
}