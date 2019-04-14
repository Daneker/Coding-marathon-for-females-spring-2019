class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int sum = 0;
        int n = ops.size();
        for(int i=0; i < n; ++i) {
            if(ops[i] == "C") {
                st.pop();
            }
            else if(ops[i] == "D") {
                int last = 2*st.top();
                st.push(last);
            }
            else if(ops[i] == "+") {
                int last = st.top();
                st.pop();
                int pre_last = st.top();
                st.push(last);
                st.push(pre_last + last);
            }
            else {
                st.push(stoi(ops[i]));
            }
        }
        while(!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
