#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Chirag";
    m[2] = "Parth";
    m[13] = "Rudra";
    // m.insert({5, "bheem"});

    for (auto i : m)
    {
        cout << i.first;
        cout << "   " << i.second << "\t";
    }
    cout << endl;
    cout << "Count Of 13 ==> " << m.count(13) << endl;

    m.erase(13);
    for (auto i : m)
    {
        cout << i.first;
        cout << "   " << i.second << "\t";
    }

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first;
        cout << "   " << (*i).second << "\t";
    }
}