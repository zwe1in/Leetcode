#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * @brief 前缀和余数相等，说明新加入的元素组能被k整除
*/
bool checkSubarraySum(vector<int>& nums, int k) 
{
    int preSum = 0;
    unordered_map<int, int> modMap;
    modMap[0] = -1;
    for(int i = 0; i < nums.size(); ++i)
    {
        preSum += nums[i];
        int mod = preSum % k;
        if(modMap.find(mod) != modMap.end())
        {
            if(i - modMap[mod] > 1)
                return true;
        }
        else    //不存在的时候才更新
            modMap[mod] = i;
    }
    return false;
}

int main()
{
    cout << "Input an array as nums: " << endl;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int tmp;
    vector<int> nums;
    while(ss >> tmp)
        nums.push_back(tmp);

    cout << "Input an number as k: " << endl;
    int k;
    cin >> k;

    cout << checkSubarraySum(nums, k) << endl;
    return 0;
}