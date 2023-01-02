#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    // d.pop_back();
    // d.pop_front();
    cout << "Print 1st index Element ==> " << d.at(1) << endl;
    cout << "Front Element ==> " << d.front() << endl;
    cout << "Back Element ==> " << d.back() << endl;

    cout << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << d.size() << endl;
}