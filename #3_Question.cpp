#include <iostream>
using namespace std;

int main()
{
    // Number = 1234
    // Product = 1 * 2 * 3 * 4 = 24
    // Sum = 1 + 2 + 3 + 4 = 10
    // Answer = 24 - 10 = 14
    float Number = 4421;
    int Sum = 0, Product = 1;
    int F = Number;

    // Solution Or Logic
    // (1234 % 10) = 4
    // (123 % 10)  = 3
    // (12 % 10)   = 2
    // (1 % 10)    = 1

    for (int i = 0; F != 0; i++)
    {
        int Remainder = F % 10;
        Sum = Sum + Remainder;
        Product = Product * Remainder;
        F = F / 10;
    }

    int Answer = Product - Sum;
    cout << "Product = " << Product << endl;
    cout << "Sum = " << Sum << endl;
    cout << "Answer(Product - Sum) = " << Answer << endl;

    // 11
    uint32_t n = 110100;
    int Count = 0;
    for (int i = 0; n != 0; i++)
    {
        int N = n % 10;
        if (N == 1)
        {
            Count += 1;
        }
        n = n / 10;
    }
    cout << "Count = " << Count << endl;
}