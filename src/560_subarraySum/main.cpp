#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
/**
 * @brief 找到presum[i] - k 是否已经存在，存在说明这肯定能有一段和为k，
 * 然后用哈希表存每个前缀和出现的次数
*/
int subarraySum(vector<int>& nums, int k) 
{
    int res = 0, sum = 0;
    unordered_map<int, int> sumMap; // 前缀和 -- 已经出现的次数
    sumMap[0] = 1;
    for(int i = 0; i < nums.size(); ++i)
    {
        sum += nums[i];
        if(sumMap.find(sum - k) != sumMap.end())
            res += sumMap[sum - k];
        ++sumMap[sum];
    }
    return res;
}
int main()
{
    cout << "Input an array as nums: " << endl;
    string input;
    getline(cin, input);
    stringstream inputStream(input);
    vector<int> nums;
    int tmp;
    while(inputStream >> tmp)
        nums.push_back(tmp);
    cout << "Input an number as k: " << endl;
    int k;
    cin >> k;
    return 0;
}