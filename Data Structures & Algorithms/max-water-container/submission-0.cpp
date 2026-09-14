class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxVolume = 0;

        while (i < j)
        {
            int left = heights[i];
            int right = heights[j];
            maxVolume = std::max(maxVolume,(std::min(heights[i],heights[j]) * (j - i)));

            if (std::min(heights[i],heights[j]) == heights[i])
            {
                ++i;
                continue;
            }else
            {
                --j;
                continue;
            }

        }
        return maxVolume;
    }
};
