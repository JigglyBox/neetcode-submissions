class Solution {
public:
    bool isValid(string s) {
        if (s.length() <= 1) return false;

        stack<char> st;

        for (char c : s) {

            // Push opening brackets
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
                continue;
            }

            // If closing bracket but stack is empty
            if (st.empty()) return false;

            // Check match
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '['))
            {
                st.pop();
            } else {
                return false;
            }
        }

        // Valid only if no unmatched openings remain
        return st.empty();
    }
};
