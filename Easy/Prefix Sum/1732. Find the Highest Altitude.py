# 1732. Find the Highest Altitude
class Solution:
    def largestAltitude(self, gain: List[int]) -> int:

        start = 0

        ans = 0

        for i in gain:
            start += i
            ans = max(ans,start)
        
        return ans
        
