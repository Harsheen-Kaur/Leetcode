class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        stack<char>st;
        for(char current:s){
            if(!st.empty() && current==st.top()){
                st.pop();
            }
            else{
                st.push(current);
            }
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
      
        return ans;
    }
};