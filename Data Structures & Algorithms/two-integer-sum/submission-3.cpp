class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<std::pair<int,int>> ogNums;
        for (int i = 0; i < nums.size(); ++i)
        {
            ogNums.push_back({nums[i],i});
        }
        
        int i = 0;
        int j = nums.size() - 1;
        std::sort(ogNums.begin(), ogNums.end());
        while (i < j)
        {
            int currentTarget = ogNums[i].first + ogNums[j].first;
            if (currentTarget == target)
            {
                
                return {std::min(ogNums[i].second,ogNums[j].second),std::max(ogNums[i].second,ogNums[j].second)};
            }else
            {
                if(currentTarget < target)
                {
                    ++i;
                }else
                {
                    --j;
                }
            }
        }
        return {};
    }
};
