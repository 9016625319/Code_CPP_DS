#include <iostream>
using namespace std;

int main()
{
    cout << "Mein Chirag Hu :-) " << endl;

    int A = 5;
    cout << "int A = " << A << " (" << sizeof(A) << " Byte)" << endl;

    float B = 5.9;
    cout << "float B = " << B << " (" << sizeof(B) << " Byte)" << endl;

    char C = 'a';
    cout << "char C = " << C << " (" << sizeof(C) << " Byte)" << endl;

    bool D = true;
    cout << "bool D = " << D << " (" << sizeof(D) << " Byte)" << endl;

    double E = 3.142857;
    cout << "double E = " << E << " (" << sizeof(E) << " Byte)" << endl;

    int F = 'A';
    cout << "int F = " << F << " (" << sizeof(F) << " Byte)" << endl;

    char G = 97;
    cout << "char G = " << G << " (" << sizeof(F) << " Byte)" << endl;

    char H = 123456;
    cout << "char H = " << H << " (" << sizeof(H) << " Byte)" << endl;

    unsigned int I = -121;
    cout << "unsigned int I = " << I << " (" << sizeof(I) << " Byte)" << endl; // stores Only Positive Number
}