// Input : nums = [ 1, 2, 3, 4, 5, 6, 7 ], k = 3
// Output : [ 5, 6, 7, 1, 2, 3, 4 ]
// Explanation : rotate 1 steps to the right : [ 7, 1, 2, 3, 4, 5, 6 ]
// rotate 2 steps to the right : [ 6, 7, 1, 2, 3, 4, 5 ]
// rotate 3 steps to the right : [ 5, 6, 7, 1, 2, 3, 4 ]
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

vector<int> Question(vector<int> v, int k)
{
/* 
    int i = 0;
    if (v.size() % 2 == 1)
    {
        while (i < k)
        {
            int Temp = v[k];
            swap(v[i], v[k + i + 1]);
            swap(v[k + i], v[k + i + 1]);
            i++;
            // print(v);
        }
    }
    else
    {
        while (i < k)
        {
            int Temp = v[k];
            swap(v[i], v[k + i]);
            i++;
            // print(v);
        }
    }
 */
    print(v);
    vector<int> v1(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        v1[(i + k) % v.size()] = v[i];
    }
    v = v1;

    return v;
}

int main()
{
    vector<int> v;
    // v = [ 1, 2, 3, 4, 5, 6, 7 ], k = 3 ==> [ 5, 6, 7, 1, 2, 3, 4]
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    vector<int> q = Question(v, 3);
    print(q);

    // v = [ -1, -100, 3, 99 ] ==> [3,99,-1,-100]
    // v.push_back(-1);
    // v.push_back(-100);
    // v.push_back(3);
    // v.push_back(99);
    // vector<int> q = Question(v, 2);
    // print(q);
}