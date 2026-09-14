class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxVol = 0;

        while (left < right)
        {
            int currentVol = min(heights[left],heights[right]) * (right - left);
            maxVol = max(maxVol,currentVol);

            if (heights[left] > heights[right])
            {
                --right;

            }else if(heights[left] < heights[right])
            {
                ++left;
            }else
            {
                ++left;
            }
        }

        return maxVol;
        
    }
};
