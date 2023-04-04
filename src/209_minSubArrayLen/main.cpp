#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief 维护一个窗口，窗口里面的值的和大于等于target，每次满足条件后就开始缩窗（丢左边的元素直到不满足）
 *          再往右边加新元素
*/
int minSubArrayLen(int target, vector<int>& nums) 
{
    int minLen = INT_MAX, preSum = 0, j = -1;
    for(int i = 0; i < nums.size(); ++i)
    {
        preSum += nums[i];
        while(j < i && preSum >= target)
        {
            minLen = min(minLen, i - j);
            preSum -= nums[++j];
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
}

int main()
{
    int target;
    cin >> target;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int tmp;
    vector<int> nums;
    while(ss >> tmp)
        nums.push_back(tmp);

    cout << minSubArrayLen(target, nums) << endl;
    return 0;
}