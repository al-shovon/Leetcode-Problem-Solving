# 3689. Maximum Total Subarray Value I
class Solution:
    def maxTotalValue(self, nums: List[int], k: int) -> int:

        mx = nums[0]
        mn = nums[0]

        for i in nums:
            mx = max(mx,i)
            mn = min(mn,i)

        return (mx - mn)*k
        
