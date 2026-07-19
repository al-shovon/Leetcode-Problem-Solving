// 1081. Smallest Subsequence of Distinct Characters
class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        vector<int>freq(26,0);
        for(auto i : s){
            freq[i-'a']++;
        }
        stack<char>st;

        vector<bool>check(26,0);

        for(int i = 0; i<n;i++){
            char ch = s[i];
            freq[ch-'a']--;

            if(st.empty()){
                check[ch-'a'] = 1;
                st.push(ch);
                continue;

            }
            if(check[ch-'a']) continue;

            


            if(ch > st.top()){
                check[ch-'a'] = 1;
                st.push(ch);
                continue;
            }
            
            

            while(!st.empty() && st.top() > ch){
                if(freq[st.top() - 'a'] != 0){
                    check[st.top() - 'a'] = 0;
                    st.pop();
                }
                else break;
            }
            st.push(ch);
            check[ch-'a'] = 1;
            

        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
