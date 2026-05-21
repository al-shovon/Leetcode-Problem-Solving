# 3043. Find the Length of the Longest Common Prefix

class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:

        n1 = len(arr1)
        n2 = len(arr2)

        st1 = set()
        st2 = set()
        ans = 0

        for i in arr1:
            while(i > 0):
                st1.add(i)
                i//=10
        
        for i in arr2:
            while(i > 0):
                st2.add(i)
                i//=10
        

        for i in st1:
            if(i in st2): ans = max(ans,i)
        
        if ans == 0: return 0

        return len(str(ans))


