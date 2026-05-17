# 3932. Count K-th Roots in a Range ->python
class Solution:
    def countKthRoots(self, l: int, r: int, k: int) -> int:

        if(k == 1): return r-l+1

        i = 0
        while((i ** k) < l): i+=1
        if((i ** k) > r): return 0

        j = i+1

        while((j ** k) <= r): j+=1
        return j-i
        
