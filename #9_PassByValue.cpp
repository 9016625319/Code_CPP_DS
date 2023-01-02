#include <iostream>
using namespace std;

void Dummy(int N)
{
    N++;
    cout << "N = " << N << endl;
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;
    Dummy(N);

    cout << "N in Main Block = " << N << endl;
}