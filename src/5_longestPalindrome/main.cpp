#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int palindromeLen(string& s, int left, int right)
{
    int len = 0;
    while(left >= 0 && right < s.size() && s[left] == s[right])
    {
        --left;
        ++right;
    }
    return right - left - 1;
}

string longestPalindrome(string& s) 
{
    int maxLen = 1, start = 0;
    for(int i = 1; i < s.size(); ++i)
    {
        int len1 = palindromeLen(s, i - 1, i);
        int len2 = palindromeLen(s, i - 1, i + 1);
        int len = max(len1, len2);
        if(len > maxLen)
        {
            start = i - len / 2;
            maxLen = len;
        }
    }
    return s.substr(start, maxLen);
}

int main()
{
    cout << "Input the string: " << endl;
    string s;
    cin >> s;
    cout << longestPalindrome(s) << endl;
    return 0;
}