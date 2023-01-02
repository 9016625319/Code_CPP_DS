#include <iostream>
#include <string>
using namespace std;

int checkArray(int Arr1[], int Arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (Arr1[i] != Arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int Arr1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int c = char(s1[i]) - 97;
        Arr1[c] = Arr1[c] + 1;
    }
    for (int i = 0; i <= s2.length() - s1.length() && s1.length() <= s2.length(); i++)
    {
        bool check = true;
        int Arr2[26] = {0};
        for (int j = 0; j < s1.length(); j++)
        {
            int c = (char)s2[(i + j)] - 97;
            // cout << c << endl;
            // Arr2[c] = Arr2[c] + 1;

            if (c < 0)
            {
                c = c + 100;
                c = c - 97;
            }
            // cout << c << "\t";
            Arr2[c] = Arr2[c] + 1;
        }
        if (checkArray(Arr1, Arr2))
        {
            return true;
        }
        // cout << i;
    }
    return false;
}

int main()
{
    // string s1 = "ab", s2 = "eidbaooo";
    // string s1 = "ab", s2 = "eidboaoo";
    // string s1 = "adc", s2 = "dcda";
    string s1 = "a", s2 = "ab";
    cout << checkInclusion(s1, s2) << endl;
}