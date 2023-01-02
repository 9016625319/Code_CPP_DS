#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "\t";
    }
    cout << endl;
}

void Question(vector<int> v1, vector<int> v2)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        sum1 = (sum1 * 10) + v1[i];
    }
    // cout << sum1 << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        sum2 = (sum2 * 10) + v2[i];
    }
    // cout << sum2 << endl;

    int sum = sum1 + sum2;
    // cout << sum << endl;

    vector<int> v;
    while (sum != 0)
    {
        v.push_back(sum % 10);
        sum = sum / 10;
    }
    for (int i = 0; i < v.size() / 2; i++)
    {
        swap(v[i], v[v.size() - 1 - i]);
    }
    print(v);
}

int main()
{
    vector<int> v1;
    v1.push_back(4);
    // 4 1 2 1
    // 7 4 1 2
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(1);

    vector<int> v2;
    v2.push_back(7);
    v2.push_back(4);
    v2.push_back(1);
    v2.push_back(2);
    // print(v1);
    // print(v2);
    // cout << Question(v1, v2);
    Question(v1, v2);
}