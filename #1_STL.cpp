#include <iostream>
#include <array>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};

    array<int, 4> b = {1, 2, 3, 4};
    int size = b.size();

    for (int i = 0; i < size; i++)
    {
        cout << b[i] << "\t";
    }
    cout << endl;

    cout << "No.2 Element ==> " << b.at(2) << endl;
    cout << "Empty Or Not ==> " << b.empty() << endl;
    cout << "First Element ==> " << b.front() << endl;
    cout << "Last Element ==> " << b.back() << endl;
}