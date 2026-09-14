class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> postfix;
        vector<int> res;
        int sum = 1;

        for (int i = 0; i < nums.size(); ++i)
        {
            sum *= nums[i];
            prefix.push_back(sum);
        }

        sum = 1;
        for (int j = nums.size() - 1; j >= 0; --j)
        {
            sum *= nums[j];
            postfix.push_back(sum);
        }
        std::reverse(postfix.begin(), postfix.end());

        for (int i = 0; i < nums.size(); ++i)
        {
            // There is no left prefix.
            if (i == 0)
            {
                res.push_back(postfix[i + 1]);
            }
            else if (i == nums.size() - 1)
            {
                res.push_back(prefix[i - 1]);
            }
            else
            {
                int result = prefix[i - 1] * postfix[i + 1];
                res.push_back(result);
            }
        }

        return res;

    }
};
