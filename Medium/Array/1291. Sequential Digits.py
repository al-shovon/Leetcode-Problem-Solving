# 1291. Sequential Digits
# Using Deque
class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:

        # from collections import deque

        ans = []

        q = deque()
        for i in range(1,9,1):
            q.append(i)
        
        while(q):
            val = q[0]
            q.popleft()
            if(val > high) : break
            if(val >= low): ans.append(val)
            digit = val%10
            if(digit == 9): continue
            q.append((val*10) + digit+1)
        return ans
