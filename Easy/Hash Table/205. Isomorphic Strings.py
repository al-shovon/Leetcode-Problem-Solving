# 205. Isomorphic Strings.cpp

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:

        st = set()
        mp = {}

        n = len(s)

        for i in range(0,n,1):
            if s[i] in mp:
                if mp[s[i]] != t[i] : return False
            
            else: 
                if t[i] in st : return False
                mp[s[i]] = t[i]
                st.add(t[i])
        
        return True
        
