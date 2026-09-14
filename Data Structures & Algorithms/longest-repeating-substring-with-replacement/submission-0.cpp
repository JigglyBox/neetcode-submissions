class Solution {
public:
    int characterReplacement(string s, int k) {
        // k = s.size() - most frequent character
        std::unordered_set<char> gar(s.begin(), s.end());
        int l = 0;
        int best = 0;


        for ( char c : gar )
        {
            int l = 0;
            int count = 0;
            for (int r = 0; r < s.size(); ++r)
            {
                if (c == s[r])
                {
                    ++count;
                }
                else
                {
                    while ((r - l + 1) - count > k)
                    {
                        if (s[l] == c)
                        {
                            --count;
                        }
                        ++l;
                    }
                }

                best = std::max(r-l+1, best);

            }
        }
        return best;
    }
    
};
