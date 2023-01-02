#include <iostream>
#include <string>
using namespace std;

string removeOccurence(string s, string part)
{
    cout << s << endl;
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
        cout << s << endl;
    }
    return s;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurence(s, part) << endl;
}