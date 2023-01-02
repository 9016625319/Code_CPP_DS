#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    list<int> n(l);

    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << "\t";
    }
    cout << endl;
    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << "\t";
    }
    cout << "\nSize of list ==> " << l.size() << endl;

    list<int> new_list(5, 100);
    for (int i : new_list)
    {
        cout << i << "\t";
    }
}