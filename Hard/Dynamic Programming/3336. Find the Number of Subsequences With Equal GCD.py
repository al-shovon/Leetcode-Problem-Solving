# 3336. Find the Number of Subsequences With Equal GCD -> rec+memo

class Solution:
    import math
    n = 0
    

    def solve(self,nums,index,seq1,seq2):

        if(index,seq1,seq2) in self.dp:
            return self.dp[(index,seq1,seq2)]

        if(index == self.n):
            if(seq1 != 0 and seq1 == seq2): return 1
            return 0

        skip = self.solve(nums,index+1,seq1,seq2)
        take1 = self.solve(nums,index+1,math.gcd(seq1,nums[index]), seq2)
        take2 = self.solve(nums, index+1, seq1, math.gcd(seq2,nums[index]))

        self.dp[(index,seq1,seq2)] = (skip+take1+take2)% (10**9 + 7)
        return self.dp[(index,seq1,seq2)]
    def subsequencePairCount(self, nums: List[int]) -> int:
        self.n = len(nums)
        self.dp = {}
        return self.solve(nums,0,0,0)
        
