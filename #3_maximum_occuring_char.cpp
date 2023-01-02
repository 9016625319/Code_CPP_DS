#include <iostream>
using namespace std;

char maxOccuringCharacter(string s)
{
    int Arr[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < s.length(); i++)
    {
        int character = -1;
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            character = int(s[i]) - 65;
        }
        else
        {
            character = int(s[i]) - 97;
        }
        Arr[character] = Arr[character] + 1;
        // cout << character << "\t";
    }
    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        // cout << Arr[i] << endl;
        if (Arr[max] < Arr[i])
        {
            max = i;
        }
    }
    // cout << max;
    return char(max + 97);
}
int main()
{
    // string s = "testsample";
    string s = "Output";
    cout << "Maximum Occuring Character is: " << maxOccuringCharacter(s) << endl;
}