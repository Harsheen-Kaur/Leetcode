class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
       for(char current:s){
        if(current=='(' || current=='{' || current=='['){
            st.push(current);
        }
        else{
            if(!st.empty() && ((current==')' && st.top()=='(')||(current=='}'&& st.top()=='{')||(current==']' && st.top()=='['))){
                st.pop();
            }
            else{
                return 0;
            }
        }
       }
       return st.empty();
    }
};