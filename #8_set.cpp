#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(6);
    s.insert(10);
    s.insert(2);
    s.insert(10);

    for (int i : s)
    {
        cout << i << "\t";
    }
    cout << endl;

    s.erase(s.begin());
    for (int i : s)
    {
        cout << i << "\t";
    }
    cout << endl;

    cout << "5 is present or not ==> " << s.count(10) << endl;

    set<int>::iterator itr = s.find(2);
    for (auto it = itr; it!=s.end(); itr++)
    {
        cout << *it << "\t";
    }
}