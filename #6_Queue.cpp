#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Size of queue ==> " << q.size() << endl;

    cout << "First Element ==> " << q.front() << endl;
    q.pop();
    cout << "First Element ==> " << q.front() << endl;
    q.pop();
    cout << "First Element ==> " << q.front() << endl;
    q.pop();

    cout << "Size of queue ==> " << q.size() << endl;
    cout << "Queue is Empty or Not ==> " << q.empty() << endl;
}