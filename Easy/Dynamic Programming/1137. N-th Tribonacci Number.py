# 1137. N-th Tribonacci Number ->app1
class Solution:
    dp = [-1] * 38
    def tribonacci(self, n: int) -> int:
        if(n == 0): return 0
        if(n == 1 or n==2) : return 1
        if(self.dp[n] != -1) : return self.dp[n]

        self.dp[n] =  self.tribonacci(n-1) + self.tribonacci(n-2) + self.tribonacci(n-3)
        return self.dp[n]


# app->2
class Solution:
    def tribonacci(self, n: int) -> int:
        n0 = 0
        n1 = 1
        n2 = 1

        if(n == 0) : return 0
        if(n == 1 or n == 2) : return 1

        for i in range(3,n+1,1):
            temp = n0
            n0 = n1
            n1 = n2
            n2 = n1+n0+temp
        
        return n2
