#include <iostream>
#include <vector>
using namespace std;

string reverse_words(string s)
{
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            str.append("@40");
        }
        else
        {
            str.push_back(s[i]);
        }
    }
    return str;
}

int main()
{
    string s = "Coding Ninjas Is A Coding Platform";
    cout << reverse_words(s);
}