#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    vector<int> map(128, -1);
    int start = 0, max_len = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(map[s[i]] != -1)
            start = max(start, map[s[i]] + 1);
        map[s[i]] = i;
        max_len = max(i - map[s[i]] + 1, max_len);
    }
    return max_len;
}

int main()
{
    cout << "Input the string: ";
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}