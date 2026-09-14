class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        std::vector<int> prefix(n,0);
        std::vector<int> suffix(n,0);
        int maxVal = 0,totalVol = 0;

        for (int i = 0; i < n; ++i)
        { 
          maxVal = std::max(maxVal,height[i]);
          prefix[i] = maxVal;  
        }

        maxVal = 0;      
        
        for (int j = n - 1; j >= 0; --j)
        { 
          maxVal = std::max(maxVal,height[j]);
          suffix[j] = maxVal; 
        }

        for (int k = 0; k < n; ++k)
        {
            totalVol += (std::min(prefix[k],suffix[k]) - height[k]);
        }

        return totalVol;
        
    }
};
