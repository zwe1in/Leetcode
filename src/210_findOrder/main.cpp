#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

/**
 * @brief 利用拓扑图排序的方式查找，先根据输入构建拓扑图，
 *        然后深搜dfs，为了判断是否有环，设置used标志位，
 *        正在深搜的节点置1，没搜过的为0，已经搜完并记录的置2，
 *        搜到底的节点放进栈里面。
*/

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

/**
 * @brief 广搜bfs，先找‘入度’为0的节点，存进队列，然后让它的下级节点们入度减一，
 *        一直到没有'入度'为0的节点位置。最后通过判断跟预期数量是否相同来确定有没有环。
*/
vector<int> findOrderBfs(int numCourses, vector<vector<int>>& prerequisites)
{
    vector<vector<int>> edges(numCourses);
    vector<int> inedge(numCourses);
    for(auto& item : prerequisites)
    {
        edges[item[1]].push_back(item[0]);
        ++inedge[item[0]];
    }
    vector<int> result;
    queue<int> que;
    for(int i = 0; i < inedge.size(); ++i)
    {
        if(!inedge[i])
            que.push(i);
    }   

    while(!que.empty())
    {
        int node = que.front();
        result.push_back(node);
        que.pop();
        for(int i = 0; i < edges[node].size(); ++i)
        {
            --inedge[edges[node][i]];
            if(!inedge[edges[node][i]])
                que.push(edges[node][i]);
        }
    }

    if(numCourses != result.size())
        return {};
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