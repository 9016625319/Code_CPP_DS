#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Chirag");
    s.push("Rajesh");
    s.push("Bhisikar");

    cout << "Top Element ==> " << s.top() << endl;
    s.pop();
    cout << "Top Element ==> " << s.top() << endl;
    s.pop();
    cout << "Top Element ==> " << s.top() << endl;
    
    cout << "Size of stack ==> " << s.size() << endl;
    cout << "Stack is Empty or Not ==> " << s.empty() << endl;
}