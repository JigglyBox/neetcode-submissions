class Solution {
public:
    bool isValid(string s) {
        
        if (s.length() <= 1) {return false;}
        stack<char> container;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                container.push(s[i]);
                ++i;
                continue;
            }

            if (container.empty()) {return false;}

            if (s[i] == ')' && container.top() == '(')
            {
                container.pop();
                ++i;
                continue;
            }else if (s[i] == '}' && container.top() == '{')
            {
                container.pop();
                ++i;
                continue;
            }else if (s[i] == ']' && container.top() == '[')
            {
                container.pop();
                ++i;
                continue;
            }else
            {
                return false;
            }                      
        }
        
        if (container.empty()){return true;}
        return false;

        
    }
};
