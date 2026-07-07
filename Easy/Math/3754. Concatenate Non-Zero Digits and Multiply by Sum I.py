# 3754. Concatenate Non-Zero Digits and Multiply by Sum I
class Solution:
    def sumAndMultiply(self, n: int) -> int:
        x = 0
        base = 1
        sum = 0

        while(n > 0):
            rem = n%10
            x+= (rem*base)
            if(rem != 0): base *= 10
            n//=10
            sum+=rem
        return x*sum

    
