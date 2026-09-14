class MinStack {
public:
    std::stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int minVal = INT_MAX;
        std::vector<int> temp;
        while(!st.empty())
        {
            temp.push_back(st.top());
            minVal = std::min(minVal, st.top());
            st.pop();
        }
        for (int j = (int)temp.size() - 1; j >= 0; --j) {
            st.push(temp[j]);
        }
        return minVal;
    }
};
