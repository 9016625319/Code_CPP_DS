#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    if (s.length() <= 0)
    {
        return "";
    }

    for (int i = 0; i < s.length() - 1 && s.length() >= 0; i++)
    {
        if (s[i] == s[i + 1])
        {
            // cout << s << "\ti = " << i << " s[" << i << "] = " << s[i] << " s[" << (i + 1) << "] = " << s[i + 1] << "    " << s.length() << endl;
            if (i <= 2)
            {
                // cout << i << "  " << s.erase(i, 2) << endl;
                s.erase(i, 2);
            }
            else
            {
                // cout << i << "  " << s.erase(i, (i + 2)) << endl;
                s.erase(i, (i + 2));
            }
            s = removeDuplicates(s);
        }
    }
    // removeDuplicates(s);
    // cout << s << endl;
    return s;
}
int main()
{
    // string s = "abbaca";
    string s = "aaaaaaaa";
    // Output : "ca"
    ////////////012345
    // string s = "azxxzy";
    // Output : "ay"
    // removeDuplicates(s);
    // cout << removeCharacters(s) << endl;
    cout << removeDuplicates(s);
}