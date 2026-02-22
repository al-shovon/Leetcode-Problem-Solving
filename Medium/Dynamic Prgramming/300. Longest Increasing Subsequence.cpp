//300. Longest Increasing Subsequence
//Approch 1 -> bottom up
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        int ans = 0;
        
        for(int i = 0; i<n;i++){
            int prev = 0;

            for(int j =0; j<i;j++){
                if(nums[j] < nums[i]){
                    prev = max(prev, dp[j]);
                }

            }
            dp[i] = 1+prev;
            ans = max(dp[i],ans);

        }
        return ans;
        
    }
};

//approch 2 recusion + memo
class Solution {
public:
    int dp[2501][2501];

    int sub(vector<int>& nums, int &n, int i, int curr){
        if(i == n) return 0;
        if(curr > -1 && dp[i][curr] != -1) return dp[i][curr];

        
        
       int take =0;
        if( curr == -1 || nums[i] > nums[curr]) {
            take = 1 + sub(nums,n,i+1,i);

        }
       int skip = sub(nums,n,i+1,curr);

       if(curr != -1 ) dp[i][curr] = max(take,skip);
       return max(take,skip);
       
    }


    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        memset(dp,-1,sizeof(dp));
        return  sub(nums,n, 0, -1);

        
    }
};


//approch 3 rec (tle)
class Solution {
public:

    void sub(vector<int>& nums, int &n, int i,int &ans,vector<int>&temp){
        if(i == n){
            bool check = true;
            for(int j = 0; j < temp.size();j++){
                if(j+1 < temp.size() && temp[j] >= temp[j+1]){
                    check = false;
                    break;
                }
            }
            int s = temp.size();
            if(check == true) ans = max(ans,s);
            return;
        }
        
        temp.push_back(nums[i]);
        sub(nums,n,i+1,ans, temp);
        //temp.push_back(nums[i]);
       
        temp.pop_back();
        sub(nums,n,i+1,ans, temp);
        //temp.pop_back();
       
    }


    int lengthOfLIS(vector<int>& nums) {
        int ans = 1;
        int n = nums.size();
        vector<int>temp;

        sub(nums,n,0,ans,temp);

        return ans;

        
    }
};
