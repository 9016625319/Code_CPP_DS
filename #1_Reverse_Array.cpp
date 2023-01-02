#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "\t";
    }
    cout << endl;
}
vector<int> reverse(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

vector<int> Question(vector<int> v, int m)
{
    int start = m + 1;
    int end = v.size() - 1;
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    print(v);
    // vector<int> rv = reverse(v);
    // print(rv);
    vector<int> q = Question(v, 3);
    print(q);
}