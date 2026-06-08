# 2161. Partition Array According to Given Pivot
class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:

        n = len(nums)
        p = 0
        ans = []

        for i in nums:
            if(i< pivot) : ans.append(i)
            elif(i == pivot) : p+=1
        
        for i in range(p):
            ans.append(pivot)
        
        for i in nums:
            if(i > pivot) : ans.append(i)
        
        return ans
