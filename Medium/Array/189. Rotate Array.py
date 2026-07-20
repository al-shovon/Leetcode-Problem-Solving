# 189. Rotate Array
# app1
class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        nums.reverse()
        k = k%n

        i,j = 0,k-1
        while(i<j):
            nums[i],nums[j] = nums[j],nums[i]
            i+=1
            j-=1
        i,j = k,n-1
        while(i<j):
            nums[i],nums[j] = nums[j],nums[i]
            i+=1
            j-=1


# app2
class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        k = k%len(nums)

        nums[:] = nums[-k:]+nums[:-k]
        
