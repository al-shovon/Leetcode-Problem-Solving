//1653. Minimum Deletions to Make String Balanced
//approch 2 on medium/stack

class Solution {
public:
    int minimumDeletions(string s) {
        stack<int>st;
        int n = s.size();
        int count = 0;

        for(int i = 0; i<n;i++){
            if(!st.empty() && st.top() == 'b' && s[i] == 'a'){
                st.pop();
                count++;
            }
            else st.push(s[i]);
        }
        return count;
        
    }
};
