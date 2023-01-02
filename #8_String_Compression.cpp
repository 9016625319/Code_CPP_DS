#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char> &s)
{
    vector<char> sample;
    for (int i = 0; i < s.size(); i++)
    {
        char current = s[i];
        int j = i;
        int count = 0;
        while (j < s.size())
        {
            if (current == s[j])
            {
                count++;
            }
            else
            {
                break;
            }
            j++;
        }

        if (count == 1)
        {
            sample.push_back(s[i]);
        }
        else
        {
            sample.push_back(s[i]);
            if (count < 10)
            {
                char c = char(48 + count);
                sample.push_back(c);
            }
            else
            {
                string number;
                while (count != 0)
                {
                    int cp = count % 10;
                    char c = char(48 + cp);
                    number = number + c;
                    count = count / 10;
                }

                for (int i = number.length() - 1; i >= 0; i--)
                {
                    sample.push_back(number[i]);
                }
            }
        }
        i = j - 1;
    }
    s = sample;
    // cout << s.size();
    for (int i = 0; i < s.size(); i++)
    {
        cout << sample[i] << "\t";
    }
    cout << endl
         << "Ans = ";
    return s.size();
}

int main()
{
    vector<char> s;
    s.push_back('a');
    s.push_back('a');
    s.push_back('b');
    s.push_back('b');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    s.push_back('c');
    cout << compress(s) << endl;
}