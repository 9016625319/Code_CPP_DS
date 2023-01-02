#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, Answer = 0;
    cout << "Enter Number:- ";
    cin >> N;
    int i = 0;
    while (N != 0)
    {
        int digit = N & 1; // ==> N % 2 ==> Same
        Answer = (digit * pow(10, i)) + Answer;
        N = N >> 1; // ==> N / 2 ==> Same
        i++;
    }
    cout << "Answer is:- " << Answer << endl;
}