#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/**
 * @brief 深度搜索，效率较低，好像可以用并集查找的方式
*/
bool dfs(vector<vector<int>>& isConnected, int idx, int n)
{
    bool hasConnected = false;
    if(idx == n)
        return hasConnected;
    
    for(int i = 0; i < n; ++i)
    {
        if(isConnected[idx][i])
        {
            isConnected[idx][i] = 0;
            dfs(isConnected, i, n);
            hasConnected = true;
        }
    }
    return hasConnected;
}

int findCircleNum(vector<vector<int>>& isConnected)
{
    int count = 0;
    for(int i = 0; i < isConnected.size(); ++i)
    {
        if(dfs(isConnected, i, isConnected.size()))
            ++count;
    }
    return count;
}

int main()
{
    int count;
    cout << "Input the row and col of the matrix: " << endl;
    cin >> count;
    cin.ignore();
    vector<vector<int>> matrix(count, vector<int>(count));
    cout << "Input the matrix: " << endl;
    for(int i = 0; i < count; ++i)
    {
        string input;
        getline(cin, input);
        stringstream inputStream(input);
        for(int j = 0; j < count; ++j)
            inputStream >> matrix[i][j];
    }

    cout << findCircleNum(matrix) << endl;

    return 0;
}