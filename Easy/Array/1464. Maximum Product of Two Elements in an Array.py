# 1464. Maximum Product of Two Elements in an Array
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        n1 = -1
        n2 = -1

        for i in nums:
            if(i>n1):
                n2 = n1
                n1 = i
            else:
                n2 = max(n2,i)
            
        return (n1-1)*(n2-1)
        
