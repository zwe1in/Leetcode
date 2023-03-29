#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> nextGreaterElements(vector<int>& nums)
{
    vector<int> result(nums.size(), -1);
    vector<int> st;
    for(int i = 0; i < nums.size(); ++i)
    {
        while(!st.empty() && nums[i] > nums[st.back()])
        {
            result[st.back()] = nums[i];
            st.pop_back();
        }
        st.push_back(i);
    }
    if(st.size() == 1) 
        return result;
    int maxIdx = st[0];
    for(int i = 0; i <= maxIdx && !st.empty(); ++i)
    {
        while(!st.empty() && nums[i] > nums[st.back()])
        {
            result[st.back()] = nums[i];
            st.pop_back();
        }
    }
    return result;
}

int main()
{
    string input;
    getline(cin, input);
    stringstream inputStream(input);
    vector<int> nums;
    int tmp;
    while(inputStream >> tmp)
        nums.push_back(tmp);

    vector<int> res = nextGreaterElements(nums);
    for(auto i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}