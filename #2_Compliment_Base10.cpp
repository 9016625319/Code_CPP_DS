#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A = 5;
    int B = A;
    int mask = 0;
    while (B != 0)
    {
        mask = (mask << 1) | 1;
        B = B >> 1;
    }
    int Answer = 0;
    if (A == 0)
    {
        Answer = 0;
    }
    else
    {
        Answer = ((~A) & mask);
    }
    cout << "Answer = " << Answer << endl;
}