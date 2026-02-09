//198. House Robber
//approch 1 -> recursion + memorization
class Solution {
public:

vector<int>dp = vector<int>(101,-1);
//or
//int dp[101];
//memset(dp,-1,sizeof(dp));

int cal(vector<int>&nums,int i, int n){
    if(i >= n) return 0;
    if(dp[i] != -1) return dp[i];


    int include = nums[i]+ cal(nums, i+2,n);
    int exclude = cal(nums,i+1,n);

    return dp[i] =  max(include,exclude);
    }


    int rob(vector<int>& nums) {
        int n = nums.size();
        return cal(nums,0,n);

        
    }
};

//app 2 -> bottom up
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>money(n+1);

        money[0] = 0;
        money[1] = nums[0];

        for(int i = 2; i <= n; i++){
            money[i] = max(nums[i-1]+money[i-2], money[i-1]);
        }
        return money[n];
        
    }
};

//ap->3 bottom up optimized
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        int money0 = 0;
        int money1 = nums[0];
        int max_money = money1;

        for(int i = 1; i < n; i++){
            max_money = max(nums[i]+money0, money1);
            money0 = money1;
            money1 = max_money;
        }
        return max_money;
        
    }
};
