#include <iostream>
using namespace std;
void PrintDetails();

int main()
{
    int a = 4;
    int b = 6;
    PrintDetails();
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a ^ b = " << (a ^ b) << endl
         << endl;

    cout << "17 << 1 = " << (17 << 1) << endl;
    cout << "17 >> 2 = " << (17 >> 2) << endl;
    cout << "19 >> 1 = " << (19 >> 1) << endl;
    cout << "21 << 2 = " << (21 << 2) << endl;
}

void PrintDetails()
{
    cout << "  And  |  Or   |         Not          1 0 0            |  XOR " << endl;
    cout << " 1 0 0 | 1 0 0 | 1's Compliment --> - 0 1 1 --> Do Not | 1 0 0 " << endl;
    cout << " 1 1 0 | 1 1 0 | 2's Compliment --> - 1 0 1 --> Add 1  | 1 1 0 " << endl;
    cout << " _____ | _____ |                                       | _____ " << endl;
    cout << " 1 0 0 | 1 1 0 |                                       | 0 1 0 " << endl
         << endl;
}