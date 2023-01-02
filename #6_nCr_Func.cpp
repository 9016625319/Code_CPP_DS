#include <iostream>
using namespace std;

int factorial(int N)
{
    int f = 1;
    for (int i = 1; i <= N; i++)
    {
        f = f * i;
    }
    return f;
}
int nCr(int N, int R)
{
    int NCR = factorial(N) / (factorial(R) * factorial((N - R)));
    return NCR;
}
int main()
{
    cout << nCr(8, 2) << endl;
}