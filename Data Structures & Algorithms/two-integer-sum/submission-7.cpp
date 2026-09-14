class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Pair each number with its original index
        vector<pair<int,int>> vals;
        vals.reserve(nums.size());
        for (int i = 0; i < (int)nums.size(); ++i)
            vals.emplace_back(nums[i], i);

        // Sort by value
        sort(vals.begin(), vals.end());

        // Two-pointer search
        int left = 0;
        int right = (int)vals.size() - 1;

        while (left < right) {
            int sum = vals[left].first + vals[right].first;

            if (sum == target) {
                int a = vals[left].second;
                int b = vals[right].second;
                return { min(a, b), max(a, b) };
            }

            if (sum > target)
                --right;
            else
                ++left;
        }

        return {};  // unreachable for valid input
    }
};
