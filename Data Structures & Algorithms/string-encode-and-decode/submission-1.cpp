class Solution {
public:

    string encode(vector<string>& strs) {
        string encoding;
        for (int i = 0; i < strs.size(); ++i)
        {
            encoding += std::to_string(strs[i].length()) + '#' + strs[i];
        }
        return encoding;
    }

    // 4#neet4#code4#love3#you
    vector<string> decode(string s) {
        std::vector<string> decoded;
        int i = 0;
        while (i < s.size())
        {
            string len;
            while (std::isdigit(s[i]))
            {
                len += s[i];
                ++i;
            }
            if ((s[i]) == '#')
            {
                string word = s.substr(i + 1, std::stoi(len));
                decoded.push_back(word);
                i += std::stoi(len) + 1;
                len = "";
            }
        }
        return decoded;
    }

};
