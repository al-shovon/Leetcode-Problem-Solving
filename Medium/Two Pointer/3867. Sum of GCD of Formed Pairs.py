# 3867. Sum of GCD of Formed Pairs
class Solution:
    def gcdSum(self, nums: list[int]) -> int:

        n = len(nums)
        max_i = nums[0]

        gcd_nums = []

        for i in nums:
            max_i = max(max_i,i)
            gcd_nums.append(math.gcd(i,max_i))
        
        start = 0
        end = n-1
        gcd_nums.sort()
        sum = 0
        while(start < end):
            sum+= math.gcd(gcd_nums[start], gcd_nums[end])
            start+=1
            end-=1
        
        return sum
