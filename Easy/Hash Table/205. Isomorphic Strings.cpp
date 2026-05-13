//205. Isomorphic Strings ->c++

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char,char>mp_s;
        unordered_set<char>st;
        int n = s.size();

        for(int i = 0; i< n; i++){

            if(mp_s.find(s[i]) != mp_s.end()){
                if(mp_s[s[i]] != t[i]) return false;
            }
            else{
                if(st.find(t[i]) != st.end()) return false;

                st.insert(t[i]);
                
                 mp_s[s[i]] = t[i];

            }
            
        }

        return true;
        
    }
};

