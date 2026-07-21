# 3499. Maximize Active Section with Trade I
# app 2 (app 1 in c++)
class Solution:
    def maxActiveSectionsAfterTrade(self, s: str) -> int:
        n = len(s)

        one = 0
        zero = []
        i = 0
        while(i<n):
            if(s[i] == '1'):
                one+=1
                i+=1
                continue
            temp = 0
            while(i<n and s[i] == '0'):
                temp+=1
                i+=1

            zero.append(temp)
        
        if(len(zero) == 1): return one

        ans = one
        for j in range(1,len(zero),1):
            ans = max(ans,one+zero[j]+zero[j-1])
        
        return ans
            
        
