class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // I need a hashmap
        unordered_map <string, vector <string>> groups;
        vector <string> groupedVal;
        // Sorted words, gives me a the same key if words are an anagram
        for (int i = 0; i < strs.size(); ++i)
        {
            // Go through each word, sort them into keys and place the value in map
            string key =strs[i];
            sort(key.begin(),key.end());
            // Map[key] = value
            groups[key].push_back(strs[i]);
        }

        // After the for loop ends I now have a hashmap that has been grouped
        // BUT! In the values, the type is actually a vector containing vectors of type string
        vector <vector<string>> result;
        for (auto &k : groups)
        {  
            result.push_back(k.second);
        }

        return result;
    }
};
