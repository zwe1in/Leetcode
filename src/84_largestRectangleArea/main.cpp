#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int largestRectangleArea(vector<int>& heights)
{
    vector<int> st;
    int maxArea = 0;
    for(int i = 0; i < heights.size(); ++i)
    {
        int curHeight = heights[i];
        if(st.empty() || curHeight >= st.back())
            st.push_back(curHeight);
        else
        {
            int num = 1;
            for(int j = st.size() - 1; j >= 0 && st[j] > curHeight; --j)
            {
                maxArea = max(num++ * st[j], maxArea);
                st[j] = curHeight;
            }
            st.push_back(curHeight);
        }
    }

    int num = 1;
    for(int j = st.size() - 1; j >= 0; --j)
        maxArea = max(num++ * st[j], maxArea);

    return maxArea;
}

int main()
{
    cout << "Main " << endl;
    string input;
    getline(cin, input);
    stringstream inputStream(input);
    vector<int> heights;
    int tmp;
    while(inputStream >> tmp)
        heights.push_back(tmp);

    cout << largestRectangleArea(heights) << endl;
    return 0;
}