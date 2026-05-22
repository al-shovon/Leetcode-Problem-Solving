# 33. Search in Rotated Sorted Array
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        n = len(nums)
        ans = -1

        l = 0
        r = n-1

        while(l <=  r):
            mid = l + (r-l)//2

            if(nums[mid] == target) : return mid

            if(nums[mid] >= nums[l] and nums[l] <= target and nums[mid] > target) :
                r = mid-1
                continue
            
            elif(nums[mid] <= nums[r] and target > nums[mid] and target <= nums[r]):
                l = mid+1
                continue

            elif(nums[mid] < nums[l]) : 
                r = mid-1
                continue
            elif(nums[mid] > nums[r]):
                l = mid+1
                continue
            else: return ans

            
        
        return ans
