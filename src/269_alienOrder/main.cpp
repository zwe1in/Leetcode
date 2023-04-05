#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

/**
 * @brief 可以从每两个单词之间的比较获得相应一组字母的大小关系，
 *        然后根据"大元素-->小元素"构建拓扑图、拓扑排序
*/

string alienOrder(vector<string>& words)
{
    unordered_map<char, vector<char>> edges;
    unordered_map<char, int> inedges;
    for(int i = 0; i < words.size() - 1; ++i)
    {
        int l = 0, r = 0;
        while(l < words[i].size() && r < words[i + 1].size())
        {
            if(words[i][l] != words[i + 1][r])
            {
                edges[words[i][l]].push_back(words[i + 1][r]);
                if(inedges.find(words[i][l]) == inedges.end())
                    inedges[words[i][l]] = 0;
                ++inedges[words[i + 1][r]];
                break;
            }
            ++l;
            ++r;
        }
    }
    
    string result;
    queue<char> que;
    for(auto iter = inedges.begin(); iter != inedges.end(); ++iter)
    {
        if(iter->second == 0)
            que.push(iter->first);
    }

    while(!que.empty())
    {
        char letter = que.front();
        result.push_back(letter);
        que.pop();
        for(int i = 0; i < edges[letter].size(); ++i)
        {
            --inedges[edges[letter][i]];
            if(inedges[edges[letter][i]] == 0)
                que.push(edges[letter][i]);
        }
    }

    if(result.size() != edges.size())
        return "";
    return result;
}

int main()
{
    cout << "Input total number of nums: " << endl;
    int n;
    cin >> n;
    cout << "Input word set: " << endl;
    vector<string> words(n);
    for(int i = 0; i < n; ++i)
        cin >> words[i];
    
    cout << alienOrder(words) << endl;
    return 0;
}