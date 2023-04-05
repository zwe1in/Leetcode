#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool valid = true;  // 是否有环

void dfs(vector<vector<int>>& edges, vector<int>& used, vector<int>& st, int node)
{
    used[node] = 1;
    for(int i = 0; i < edges[node].size(); ++i)
    {
        if(used[edges[node][i]] == 0)
            dfs(edges, used, st, edges[node][i]);
        else if(used[edges[node][i]] == 1)
            valid = false;
        if(!valid)
            return ;
    }
    used[node] = 2;
    st.push_back(node);
}

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)
{
    vector<int> result;
    vector<vector<int>> edges(numCourses);
    for(auto& item : prerequisites)
    {
        edges[item[1]].push_back(item[0]);
    }
    vector<int> used(numCourses);   // 0表示没用过，1表示正在找，2表示找完了

    for(int i = 0; i < numCourses && valid; ++i)
    {
        if(!used[i])
            dfs(edges, used, result, 0);
    }
    
    if(!valid)
        return {};

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    cout << "Input Courses num: " << endl;
    int numCourses;
    cin >> numCourses;
    cout << "Input order list num: " << endl;
    int orderNum;
    cin >> orderNum;
    vector<vector<int>> prerequisites(orderNum, vector<int>(2));
    for(int i = 0; i < orderNum; ++i)
        cin >> prerequisites[i][0] >> prerequisites[i][1];
    
    vector<int> res = findOrder(numCourses, prerequisites);

    for(auto i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}