class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n,0);
        for (int i = 0; i < n; ++i)
        {
            // stack<int> st;
            int right = i + 1;
            while(right < n)
            {
                if (temperatures[i] < temperatures[right])
                {
                    res[i] = right - i;
                    break;
                }else
                {
                    ++right;
                }

                
            }
        }
        return res;
        
    }
};
