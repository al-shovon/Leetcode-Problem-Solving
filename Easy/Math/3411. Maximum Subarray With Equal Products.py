# 3411. Maximum Subarray With Equal Products
class Solution:
    def maxLength(self, nums: List[int]) -> int:
        n = len(nums)
        ans = 0

        for i in range(0,n,1):
            temp = []
            for j in range(i,n,1):
                temp.append(nums[j])
                product = math.prod(temp)
                nums_gcd = math.gcd(*temp)
                nums_lcm = math.lcm(*temp)
                if(product == nums_lcm * nums_gcd):
                    ans = max(ans,len(temp))
        return ans
        
