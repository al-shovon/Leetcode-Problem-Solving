# 2784. Check if Array is Good -> python
class Solution:
    def isGood(self, nums: List[int]) -> bool:

        n = len(nums)

        index = [0] * n

        for i in range(0,n,1):
            if( nums[i] > n-1): return False
            index[nums[i]] += nums[i]
            

        for i in range(1,n-1,1):
            if(i != index[i]): return False
        if(index[n-1] == 2*(n-1)) : return True

        return False
        
