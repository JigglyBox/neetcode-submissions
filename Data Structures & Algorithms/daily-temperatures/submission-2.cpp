class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int sz = temperatures.size();
        std::vector<int> res(sz, 0);
        std::stack<pair<int,int>> st;

        for (int i = 0; i < sz; ++i)
        {
            while (!st.empty() && temperatures[i] > st.top().first)
            {
                auto [value, index] = st.top();
                st.pop();
                res[index] = i - index;
            }
            st.push({temperatures[i], i});
        }
        return res;
    }
};
