#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int longestOnes(vector<int>& nums, int k)
{
    vector<int> zeroIndex;
    zeroIndex.push_back(-1);
    for(int i = 0; i < nums.size(); ++i)
    {
        if(nums[i] == 0)
            zeroIndex.push_back(i);
    }
    zeroIndex.push_back(nums.size());

    if(k >= zeroIndex.size() - 2)
        return nums.size();
    int maxLen = 0; 
    for(int i = 0; i < zeroIndex.size() - k; ++i)
        maxLen = max(maxLen, zeroIndex[i + k + 1] - zeroIndex[i] - 1);
    return maxLen;
}

int main()
{
    string input;
    getline(cin, input);
    stringstream ss(input);
    int tmp, k;
    vector<int> nums;
    while(ss >> tmp)
        nums.push_back(tmp);
    cin >> k;

    cout << longestOnes(nums, k) << endl;
    return 0;
}