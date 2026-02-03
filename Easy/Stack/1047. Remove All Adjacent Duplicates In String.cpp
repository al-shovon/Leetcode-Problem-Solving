//1047. Remove All Adjacent Duplicates In String

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int n = s.size();
        string ans = "";

        for(int i = n-1; i >=0; i--){
            if(!st.empty() && st.top() == s[i]) st.pop();
            else st.push(s[i]);
        }

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
        
    }
};
