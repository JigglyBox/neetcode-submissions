class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        int left = 0, right = 0;
        for (int i = 0; i < tokens.size(); ++i)
        {
            if (tokens[i] != "+" && 
                tokens[i] != "-" && 
                tokens[i] != "*" && 
                tokens[i] != "/")
            {
                st.push(std::stoi(tokens[i]));
            }
            else
            {
                right = st.top();
                st.pop();
                left = st.top();
                st.pop();
                int result = 0;

                if (tokens[i] == "+" )
                {
                    result = left + right;
                    st.push(result); 
                }
                else if (tokens[i] == "-" )
                {
                    result = left - right;
                    st.push(result); 
                }
                else if (tokens[i] == "*" )
                {
                    result = left * right;
                    st.push(result); 
                }
                else if (tokens[i] == "/" )
                {
                    result = left / right;
                    st.push(result); 
                }
                
            }
        }
        return st.top();
    }
};
