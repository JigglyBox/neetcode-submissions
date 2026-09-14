class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        int left, right;

        // Make sure that the string read is only lower case
        // If smaller than 97 'A', it is an uppercase
        // 32 ' ' 
        while (i < j)
        {
            left = s[i];
            right = s[j];
            // Converts all upper case to lower via ASCII
            if (left >= 'A' && left <= 'Z')
            {
                left += 32;
            }

            if (right >= 'A' && right <= 'Z')
            {
                right += 32;
            }

            if (!((right >= 'a' && right <= 'z') || (right >= '0' && right <= '9')))
            {
                --j;
                continue;
            }
            if (!((left >= 'a' && left <= 'z') || (left >= '0' && left <= '9')))
            {
                ++i;
                continue;
            }

            if (left != right)
            {
                return false;
            }else
            {
                ++i;
                --j;
            }

        }
        return true;
    }
};
