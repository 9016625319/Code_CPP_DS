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

bool Question(vector<int> v)
{
    int count = 0;
    int index = 0;
    int min = v[0];
    int i = 0;
    for (i = 0; i < v.size(); i++)
    {
        if (v[i] <= v[i + 1])
        {
            if (min < v[i])
            {
            }
        }
        else
        {
            index = i;
            count++;
            break;
        }
    }
    cout << count << "\t" << index << "\t" << min << endl;
    for (i = index + 1; i < v.size() - 1; i++)
    {
        if (v[i] <= v[i + 1] && min >= v[i])
        {
        }
        else
        {
            count++;
            break;
        }
    }
    if (min < v[i])
    {
        count++;
    }
    return count < 2;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // [2, 4, 1, 3]
    print(v);
    cout << Question(v);
}