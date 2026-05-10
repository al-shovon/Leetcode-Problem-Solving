//2770. Maximum Number of Jumps to Reach the Last Index
//app -> dp
class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {

        int n =nums.size();
        vector<int>dp(n,-1);
        dp[0] = 0;

        for(int i = 0; i<n;i++){
            if(dp[i] == -1) continue;

            for(int j = i+1; j<n;j++){

                if(abs(nums[j] - nums[i]) <= target) dp[j] = max(dp[j] , dp[i]+1);
            }
        }
        return dp[n-1];
        
    }
};

//app 2 memory limit exit
class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {

        int ans = -1;

        int n = nums.size();
        queue<pair<int,int>>index;

        index.push({0,0});


        while(! index.empty()){

            int temp = index.front().first;
            int step = index.front().second;
            index.pop();
            if(temp == n-1) ans = max(ans,step);

            for(int i = temp+1; i<n; i++){
                if(abs(nums[i] - nums[temp]) <= target) index.push({i,step+1});
            }

        }
        return ans;
        
    }
};
