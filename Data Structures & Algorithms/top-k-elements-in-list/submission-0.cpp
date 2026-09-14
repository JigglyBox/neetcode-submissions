class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        vector<pair<int, int>> sorted;
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i)
        {
            mp[nums[i]] += 1;
        }
        // Here my input vector has been sorted 

        for (auto &s : mp)
        {
            sorted.push_back({s.second, s.first});
        }

        std::sort(sorted.begin(),sorted.end(), std::greater<pair<int, int>>());

        for (int i = 0; i < k; ++i)
        {
            result.push_back(sorted[i].second);
        }

        return result;

    }
};
