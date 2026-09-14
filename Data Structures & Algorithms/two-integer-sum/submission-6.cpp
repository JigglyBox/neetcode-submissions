class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> ogNums;
        for(int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            if(ogNums.count(complement))
            { 
                return {ogNums[complement], i};
            }
            ogNums[nums[i]] = i;
        }
    return {};
    }
};
