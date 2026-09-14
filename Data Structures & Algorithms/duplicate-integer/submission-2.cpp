class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> vals;
        for (int i = 0; i < nums.size(); ++i)
        {
            vals.insert(nums[i]);
        }

        return !(nums.size() == vals.size());
        
    }
};