#include <iostream>
using namespace std;
int getLength(char Arr[])
{
    int i = 0;
    while (Arr[i] != '\0')
    {
        i++;
    }
    return i;
}

void reverse(char Arr[])
{
    int length = getLength(Arr);
    for (int i = 0; i < length / 2; i++)
    {
        swap(Arr[i], Arr[length - i - 1]);
    }
}

bool checkPalindrome(char s[])
{
    for (int i = 0; i < getLength(s) / 2; i++)
    {
        if (s[i] != s[getLength(s) - i - 1])
        {
            return false;
        }
    }
    return true;
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        int a = s[start];
        int b = s[end];

        if (s[start] >= 'A' && s[start] <= 'Z')
        {
            a = a + 32;
        }
        else if (s[start] >= 'a' && s[start] <= 'z')
        {
        }
        else if (s[start] >= '0' && s[start] <= '9')
        {
        }
        else
        {
            start++;
            continue;
        }

        if (s[end] >= 'A' && s[end] <= 'Z')
        {
            b = b + 32;
        }
        else if (s[end] >= 'a' && s[end] <= 'z')
        {
        }
        else if (s[end] >= '0' && s[end] <= '9')
        {
        }
        else
        {
            end--;
            continue;
        }

        if (a != b)
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    // char Name[20];
    // cout << "Enter Your Name: ";
    // cin >> Name;
    // cout << "Your Name is " << Name << endl;
    // cout << "Length of String is " << getLength(Name) << endl;
    // reverse(Name);
    // cout << "Reverse Name is " << Name << endl;
    // cout << checkPalindrome(Name) << endl;
    string s = "c1 O$d @eeD o1c";
    // string s = "CRC";
    cout << checkPalindrome(s) << endl;
}