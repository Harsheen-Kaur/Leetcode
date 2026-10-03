class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string current:operations){
            if(current=="+"){
            int a=st.top();
            st.pop();
            int sum=a+st.top();
            st.push(a);
            st.push(sum);
            }
            else if(current=="D"){
                st.push(2*st.top());
            }
            else if(current == "C"){
                st.pop();
            }
            else{
                st.push(stoi(current));
            }
        }
        int s=0;
        while(!st.empty()){
            s=s+st.top();
            st.pop();
        }
        return s;
    }
};