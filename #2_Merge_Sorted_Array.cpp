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

vector<int> Question(vector<int> v1, vector<int> v2, int m, int n, vector<int> v)
{
    int s = 0, e = 0;
    int end = (m + n);
    int i = 0;
    while (i < end)
    {
        int element = INT_MIN;
        if (v1[s] > v2[e] && e < n)
        {
            element = v2[e];
            e++;
            if (e > n)
            {
                element = v1[s];
                s++;
            }
        }
        else
        {
            element = v1[s];
            s++;
            if (s > m)
            {
                element = v2[e];
                e++;
            }
        }
        v.push_back(element);
        i++;
    }
    return v;
}

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);
    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);

    print(v1);
    print(v2);
    vector<int> v;
    v = Question(v1, v2, 5, 3, v);
    print(v);
}