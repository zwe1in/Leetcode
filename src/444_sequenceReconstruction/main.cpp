#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

/**
 * @brief 将每个子序列按从左到右顺序建立edge，形成拓扑图，然后拓扑排序得到的结果就是
 *        最短子序列，要确定是否唯一，只需要在每层bfs时，判断队列中是否仅有一个节点。
*/
bool sequenceReconstruction(vector<int>& nums, vector<vector<int>>& sequences)
{
    vector<vector<int>> edges(nums.size() + 1);
    vector<int> inedges(nums.size() + 1);
    for(int i = 0; i < sequences.size(); ++i)
    {
        edges[sequences[i][0]].push_back(sequences[i][1]);
        ++inedges[sequences[i][1]];
    }

    queue<int> que;
    for(int i = 1; i < inedges.size(); ++i)
        if(!inedges[i])
            que.push(i);

    while(!que.empty())
    {
        if(que.size() != 1)
            return false;
        int node = que.front();
        que.pop();
        for(int i = 1; i < edges[node].size(); ++i)
        {
            --inedges[edges[node][i]];
            if(!inedges[edges[node][i]])
                que.push(inedges[edges[node][i]]);
        }
    }
    // 既然已经确定是子序列，就不可能成环
    return true;
}

int main()
{
    cout << "Input length of nums: " << endl;
    int n;
    cin >> n;
    cout << "Input nums array: " << endl;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i)
        cin >> nums[i];
    cout << "Input sequences length: " << endl;
    int seq_len;
    cin >> seq_len;
    cout << "Input sequences: " << endl;
    vector<vector<int>> sequences(seq_len, vector<int>(2));
    for(int i = 0; i < seq_len; ++i)
        cin >> sequences[i][0] >> sequences[i][1];

    cout << sequenceReconstruction(nums, sequences) << endl;
    
    return 0;
}