class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int best = 0;
        std::unordered_set<char> characters;
        for (int r = 0; r < s.size(); ++r)
        {
            while (characters.count(s[r]))
            {
                characters.erase(s[l]);
                ++l;
            }
            best = std::max(best,r-l+1);
            characters.insert(s[r]);
        }
        return best;
    }
};
