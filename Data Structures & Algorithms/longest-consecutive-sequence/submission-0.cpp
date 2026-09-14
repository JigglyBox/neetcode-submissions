class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // insert into a hash set
        unordered_set<int> seq(nums.begin(),nums.end());
        int longestSeq = 0;

        for (auto &s : seq)
        {
            // Check if this is the start a sequence 
            // Basically means if there is a number smaller than the current number
            if (seq.find(s - 1) == seq.end())
            {
                int count = 1; // Count itself
                int currentNum = s;
            

                while (seq.find(currentNum + 1) != seq.end())
                {
                    ++count;
                    ++currentNum;
                }
                longestSeq = std::max(longestSeq, count);

            }

        }

        return longestSeq;
    }
};
