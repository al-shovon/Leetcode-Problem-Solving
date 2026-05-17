# 3931. Check Adjacent Digit Differences -> python

class Solution:
    def isAdjacentDiffAtMostTwo(self, s: str) -> bool:

        n = len(s)

        for i in range(0,n-1,1):
             if(abs(int(s[i]) - int(s[i+1])) > 2): return False  #also can use abs(ord(s[i]) - ord(s[i+1]))
        
        return True
        
