# 1. Two Sum in python
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)

        index = {}

        for i in range(0,n,1):
            need = target - nums[i]
            if( need in index ):
                 return [i, index[need]]
            else:
                index[nums[i]] = i

        return []


        
    

            

        
