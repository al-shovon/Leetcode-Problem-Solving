# 486. Predict the Winner
class Solution:
    def check(self,nums,i,j) -> int:
        if(i>j): return 0
        if(i == j): return nums[i]
        if(self.dp[i][j] != -1): return self.dp[i][j]


        take_i = nums[i]+ min(self.check(nums,i+2,j), self.check(nums,i+1,j-1))
        take_j = nums[j]+ min(self.check(nums,i+1,j-1), self.check(nums,i,j-2))
        self.dp[i][j] = max(take_i,take_j)
        return self.dp[i][j]

    def predictTheWinner(self, nums: List[int]) -> bool:

        n = len(nums)
        total = sum(nums)
        self.dp = [[-1]*n for _ in range(n)]
        score = self.check(nums,0,n-1)
        return True if(total-score <= score) else False
        
