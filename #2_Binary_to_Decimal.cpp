#include <iostream>
using namespace std;

int main()
{
    int N = 10101;
    int Count = 1;
    int Answer = 0;
    while (N != 0)
    {
        if ((N & 1) == 1) // ==> N % 10
        {
            Answer = Answer + Count;
        }
        Count = Count * 2;
        N = N / 10;
    }
    cout << "Answer = " << Answer << endl;
}