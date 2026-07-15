# 3658. GCD of Odd and Even Sums
class Solution:
    import math
    def gcdOfOddEvenSums(self, n: int) -> int:
        odd_sum = n**2
        even_sum = n*(n+1)
        return math.gcd(odd_sum,even_sum)

        
