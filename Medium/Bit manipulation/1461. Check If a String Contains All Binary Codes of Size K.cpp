//1461. Check If a String Contains All Binary Codes of Size K
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        unordered_set<string>st;
        int ttal = pow(2,k);

        for(int i = 0; i+k<=n;i++){
                st.insert(s.substr(i,k));
                if(st.size() == pow(2,k)) return true;
        }
        return false;
        
        
    }
};
