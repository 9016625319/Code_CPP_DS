#include <iostream>
using namespace std;

double findSquareRoot(int Number, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        // 0.1 0.01 0.001
        for (double j = ans; (j * j) < Number; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int findRoot(int Number)
{
    int start = 0;
    int end = Number;
    long long int mid = start + ((end - start) / 2);
    int ans = 0;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == Number)
        {
            ans = mid;
            break;
        }
        if (square < Number)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main()
{
    int Root = findRoot(37);
    cout << findSquareRoot(37, 5, Root);
}