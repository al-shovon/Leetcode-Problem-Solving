// 486. Predict the Winner
class Solution {
public:

    int dp[20][20];
    int check(vector<int>& nums, int i, int j){

        if(i>j) return 0;
        if(i == j) return nums[i];
        if(dp[i][j] != -1) return dp[i][j];
        

        int take_i = nums[i]+ min(check(nums,i+2,j), check(nums,i+1,j-1));
        int take_j = nums[j]+ min(check(nums,i+1,j-1), check(nums,i,j-2));

        return dp[i][j] =  max(take_i,take_j);

    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return true;
        int total = 0;
        for(auto i: nums){
            total+= i;
        }

        memset(dp,-1,sizeof(dp));
        int score = check(nums,0,n-1);

        return (total-score <= score) ? true:false;


        
    }
};
