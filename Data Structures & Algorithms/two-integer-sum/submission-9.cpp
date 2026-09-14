class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map <int, int> cache;

        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            if (cache.count(complement))
            {
                return {cache[complement], i};
            }
            cache[nums[i]] = i;
        }

        return{};
        
    }
};
