# 3514. Number of Unique XOR Triplets II
class Solution:
    def uniqueXorTriplets(self, nums: List[int]) -> int:
        st0 = set(nums)
        n = len(st0)
        if(n<3): return n
        st = set()
        for i in st0:
            for j in st0:
                st.add(i ^ j)
        
        st2 = set()

        for i in nums:
            for j in st:
                st2.add(i^j)
        return len(st2)
        
