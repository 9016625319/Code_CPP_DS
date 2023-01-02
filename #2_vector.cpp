#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1); // ==> a(size,all_Element Default Value)
    vector<int> last(a);
    cout << "Capacity Of Vector ==> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity Of Vector ==> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity Of Vector ==> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity Of Vector ==> " << v.capacity() << endl;
    v.push_back(4);
    cout << "Capacity Of Vector ==> " << v.capacity() << endl;

    cout << "Size Of Vector ==> " << v.size() << endl;
    cout << "Arr[1] ==> " << v.at(1) << endl;
    cout << "Front Element ==> " << v.front() << endl;
    cout << "Last Element ==> " << v.back() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "\t";
    }
    cout << "\n";
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "\t";
    }
    cout << "\n";
    for (int i = 0; i < last.size(); i++)
    {
        cout << last.at(i) << "\t";
    }
}