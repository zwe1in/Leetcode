#include <iostream>
#include <vector>
#include <map>
using namespace std;


/**
 * @brief 借助差分数组，按顺序模拟每个站上车下车即可，可以利用map二叉树的有序性。
*/
bool carPooling(vector<vector<int>>& trips, int capacity)
{
    map<int, int> diffArr;
    for(int i = 0; i < trips.size(); ++i)
    {
        diffArr[trips[i][1]] -= trips[i][0];
        diffArr[trips[i][2]] += trips[i][0];
    }
    
    for(auto it = diffArr.begin(); it != diffArr.end(); ++it)
    {
        capacity += it->second;
        if(capacity < 0)
            return false;
    }
    return true;
}

int main()
{
    cout << "Input line number:" << endl;
    int n;  // 有n行子数组
    cin >> n;
    cout << "Input all lines: " << endl;
    vector<vector<int>> trips(n, vector<int>(3));
    for(int i = 0; i < n; ++i)
        cin >> trips[i][0] >> trips[i][1] >> trips[i][2];
    cout << "Input capacity: " << endl;
    int capacity;
    cin >> capacity;

    cout << carPooling(trips, capacity) << endl;
    return 0;
}