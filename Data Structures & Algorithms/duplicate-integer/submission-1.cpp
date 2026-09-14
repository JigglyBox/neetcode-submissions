class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Hashmap 
        std::unordered_set<int> values; // Every value in here exists only once, and is unique. O(1) for searching.
        for (int i = 0; i < nums.size(); ++i)
        {   
            if (values.count(nums[i]))
            {
                return true;
            }

            values.insert(nums[i]);
        }
        // O(n), O(n)
        return false;
    }
};