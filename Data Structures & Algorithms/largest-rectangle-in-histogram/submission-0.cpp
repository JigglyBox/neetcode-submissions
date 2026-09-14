class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        std::stack<int> st;
        std::vector<int> left(n);
        std::vector<int> right(n);

        for (int i = 0; i < n; ++i)
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
            {
                st.pop();
            }

            if (st.empty())
            {
                left[i] = -1;
            }
            else
            {
                left[i] = st.top();
            }

            st.push(i);
        }
        
        while (!st.empty())
        {
            st.pop();
        }

        for (int j = n - 1; j >= 0; --j)
        {
            while (!st.empty() && heights[st.top()] >= heights[j])
            {
                st.pop();
            }

            if (st.empty())
            {
                right[j] = n;
            }
            else
            {
                right[j] = st.top();
            }

            st.push(j);
        }

        int maxArea = 0; 
        for (int i = 0; i < n; ++i)
        {
            int currentArea = (right[i] - left [i] - 1) * heights [i];
            maxArea = std::max(maxArea, currentArea);
        }
    return maxArea;
    }

};
