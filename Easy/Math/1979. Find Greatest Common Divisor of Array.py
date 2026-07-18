# 1979. Find Greatest Common Divisor of Array
# app->1
class Solution:
    import math
    def findGCD(self, nums: List[int]) -> int:
        nums.sort()
        return math.gcd(nums[0], nums[-1])


# app->2
class Solution:
    import math
    def findGCD(self, nums: List[int]) -> int:
        big = max(nums)
        small = min(nums)
        return math.gcd(big,small)

        
