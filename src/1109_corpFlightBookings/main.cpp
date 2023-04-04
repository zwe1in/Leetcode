#include <iostream>
#include <vector>
#include <map>
using namespace std;


/**
 * @brief 区间左边代表，当前位置往后的元素，要比左边的元素都大N，区间右边界代表，当前位置往后的元素，
 *        要比当前位置左边的元素小N。因此可以利用差分数组来解决。
*/
vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n)
{
    vector<int> diffArr(n);
    for(int i = 0; i < bookings.size(); ++i)
    {
        diffArr[bookings[i][0] - 1] += bookings[i][2];
        if(bookings[i][1] < n)
            diffArr[bookings[i][1]] -= bookings[i][2];
    }
    vector<int> result(n);
    result[0] = diffArr[0];
    for(int i = 1; i < n; ++i)
        result[i] = result[i - 1] + diffArr[i];
    
    /**
     * 避免再开辟空间，可以直接用diffArr累加前缀和
    */
    // for(int i = 1; i < n; ++i)
    //     diffArr[i] += diffArr[i - 1];
    
    return result;
}

int main()
{
    cout << "Input line number:" << endl;
    int line;  // 有n行子数组
    cin >> line;
    cout << "Input all lines: " << endl;
    vector<vector<int>> bookings(line, vector<int>(3));
    for(int i = 0; i < line; ++i)
        cin >> bookings[i][0] >> bookings[i][1] >> bookings[i][2];
    cout << "Input airline num: " << endl;
    int n;
    cin >> n;

    vector<int> result = corpFlightBookings(bookings, n);
    for(auto i : result)
        cout << i << " ";
    cout << endl;
    return 0;
}