#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures)
{
    vector<int> result(temperatures.size());
    stack<int> st;
    for(int i = 0; i < temperatures.size(); ++i)
    {
        while(!st.empty() && temperatures[i] > temperatures[st.top()])
        {
            result[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }
    return result;
}

int main()
{
    string input;
    getline(cin, input);
    stringstream inputStream(input);
    vector<int> temperatures;
    int tmp;
    while(inputStream >> tmp)
        temperatures.push_back(tmp);

    vector<int> res = dailyTemperatures(temperatures);
    for(auto i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}