//213. House Robber II

//app->1 rec+memo
class Solution {
public:



    int cal(vector<int>nums,int i,int n, int dp[]){
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];
        
        int take = nums[i]+ cal(nums,i+2,n,dp);
        int skip = cal(nums,i+1,n,dp);

        return dp[i] = max(take,skip);
    }


    int rob(vector<int>& nums) {
         int n = nums.size();
        if(n==1) return nums[0];
        int dp1[n], dp2[n];
        memset(dp1,-1,sizeof(dp1));
        memset(dp2,-1,sizeof(dp2));

        return max(cal(nums,0,n-1,dp1), cal(nums,1,n,dp2));

        
    }
};


//app 2-> bottom up
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0],nums[1]);

        int prev1 = nums[0];
        int prev0 = 0;
        int start0 = nums[0];
        int start1 = nums[1];

        for(int i = 1; i< n-1;i++){
            start0 = max(nums[i]+ prev0, prev1);
            prev0 = prev1;
            prev1 = start0;
        }
        prev1 = nums[1];
        prev0 = 0;
        for(int i = 2; i< n;i++){
            start1 = max(nums[i]+ prev0, prev1);
            prev0 = prev1;
            prev1 = start1;
        }



        return max(start0,start1);
        
    }
};
