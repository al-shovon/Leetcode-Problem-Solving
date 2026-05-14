#1614. Maximum Nesting Depth of the Parentheses

class Solution:
    def maxDepth(self, s: str) -> int:
        ans = 0
        temp = 0

        for x in s:
            if(x == '(') : temp+=1
            elif(x == ')') : temp-=1
            ans = max(ans,temp)
        
        return ans
