#include <iostream>
#include <vector>
using namespace std;

void print(vector<char> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    cout << endl;
}
// 012345678901234 ==> 15
// yM emaN si evol
void reverse(vector<char> s, vector<char> &ans, int start, int end)
{
    // cout << "start = " << start << " end = " << end << endl;
    int i = start;
    while (start <= end)
    {
        if (s[end] != ' ')
        {
            ans.push_back(s[end]);
        }
        end--;
    }
    if (ans.size() != s.size())
    {
        ans.push_back(' ');
    }
}
vector<char> reverse_words(vector<char> s)
{
    vector<char> ans(s.size());
    int start = 0;
    int end = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            end = i;
            reverse(s, ans, start, end);
            start = i + 1;
            i = end;
        }
    }
    reverse(s, ans, start, s.size());
    // print(ans);
    return ans;
}

int main()
{
    vector<char> s;
    s.push_back('M'); // 0
    s.push_back('y'); // 1
    s.push_back(' '); // 2
    s.push_back('N'); // 3
    s.push_back('a'); // 4
    s.push_back('m'); // 5
    s.push_back('e'); // 6
    s.push_back(' '); // 7
    s.push_back('i'); // 8
    s.push_back('s'); // 9
    s.push_back(' '); // 10
    s.push_back('C'); // 11
    s.push_back('h'); // 12
    s.push_back('i'); // 13
    s.push_back('r'); // 14
    s.push_back('a'); // 15
    s.push_back('g'); // 16
    print(s);
    vector<char> ans = reverse_words(s);
    print(ans);
}