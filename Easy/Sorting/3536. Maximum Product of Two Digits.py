# 3536. Maximum Product of Two Digits.cpp
class Solution:
    def maxProduct(self, n: int) -> int:
        st = str(n)
        temp = list(st)
        temp.sort()

        return (int(temp[-1]) * int(temp[-2]))
        
