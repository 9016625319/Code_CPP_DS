#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    cout << "Finding 5 ==> " << binary_search(v.begin(), v.end(), 5) << endl;

    cout << "Lower bount 5 ==> " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper bount 5 ==> " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    swap(a, b);
    cout << a << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << abcd << endl;
}