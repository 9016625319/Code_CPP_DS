#include <iostream>
using namespace std;

int main()
{
    // Arithmetic Operator + , - , * , / , %
    cout << "Arithmetic Operator\n";
    int A = 5;
    int B = 4;
    int C = A + B;
    cout << A << " + " << B << " = " << C << endl;

    C = A - B;
    cout << A << " - " << B << " = " << C << endl;

    C = A * B;
    cout << A << " * " << B << " = " << C << endl;

    C = A / B;
    cout << A << " / " << B << " = " << C << endl;

    C = A % B;
    cout << A << " % " << B << " = " << C << endl;

    // Relational Operator <= , >= , != , == , > , <
    cout << "Relational Operator\n";
    A = 5;
    B = 4;
    bool D = (A == B);
    cout << A << " == " << B << " = " << D << endl;

    D = A > B;
    cout << A << " > " << B << " = " << D << endl;

    D = A < B;
    cout << A << " < " << B << " = " << D << endl;

    D = A >= B;
    cout << A << " >= " << B << " = " << D << endl;

    D = A <= B;
    cout << A << " <= " << B << " = " << D << endl;

    D = A != B;
    cout << A << " != " << B << " = " << D << endl;

    // Logical Operator
    cout << "Logical Operator\n";
    bool R = true;
    bool S = true;
    bool E = R && D;
    cout << R << " && " << S << " = " << E << endl;

    E = R || D;
    cout << R << " || " << S << " = " << E << endl;

    E = (!D);
    cout << "!" << S << " = " << E << endl;
}