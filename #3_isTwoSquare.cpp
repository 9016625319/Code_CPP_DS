#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    bool is = false;
    int ans = 1;
    for (int i = 1; i <= 30; i++)
    {
        if (a == ans)
        {
            is = true;
            break;
        }
        ans = ans * 2;
    }
    if (is)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}