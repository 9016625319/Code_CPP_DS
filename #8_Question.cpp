#include <iostream>
using namespace std;

int arithmeticProgression(int A, int N, int B)
{
    int Ans = A * N + B;
    return Ans;
}

int setBits(int Num1, int Num2)
{
    int Set = 0;
    while ((Num1 != 0) || (Num2 != 0))
    {
        bool a = Num1 & 1;
        bool b = Num2 & 1;
        if (a && b)
        {
            Set = Set + 2;
        }
        else if (a || b)
        {
            Set = Set + 1;
        }
        Num1 = Num1 >> 1;
        Num2 = Num2 >> 1;
    }
    return Set;
}
int Fibonacci(int N)
{
    int a = 0;
    int b = 1;
    int c = 1;

    for (int i = 1; i < N; i++)
    {
        a = b;
        b = c;
        c = a + c;
    }
    return a;
}
int main()
{
    cout << arithmeticProgression(3, 3, 7) << endl;
    cout << "Number Of Set Bits in 7 & 15 is " << setBits(7, 15) << endl;
    cout << "Fibonacci Series 5th element is " << Fibonacci(5) << endl;
}