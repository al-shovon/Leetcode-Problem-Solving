//646. Maximum Length of Pair Chain

//app 1-> 
class Solution {
public:
    static bool comp(const vector<int>&a,const vector<int>&b){
        return a[1] < b[1];
    }


    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),comp);
        int n = pairs.size();

        int ans = 1;
        int curr = pairs[0][1];

        for(int i = 1; i<n;i++){
            if(pairs[i][0] > curr){
                ans++;
                curr = pairs[i][1];
            }
        }


        return ans;
        
    }
};

//app 2-> bottom up
  class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        vector<int>dp(n,0);
        int ans = 0;

        sort(pairs.begin(),pairs.end());

        for(int i = 0; i<n;i++){
            
            for(int j = 0; j < i; j++){

                if(pairs[j][1] < pairs[i][0]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            ans = max(ans,dp[i]+1);
        }
        return ans;
        
    }
};

// app 3 rec+mem
class Solution {
public:

    int dp[1001][1001];

    int cal(vector<vector<int>>& pairs, int i, int n,int prev_ind){
            if(i == n) return 0;
            if(prev_ind != -1 && dp[i][prev_ind] != -1) return dp[i][prev_ind];

            int take = 0;
            if(prev_ind == -1 || pairs[prev_ind][1] < pairs[i][0]){
                take = 1+ cal(pairs,i+1,n,i);
            }
            int skip = cal(pairs,i+1,n,prev_ind);

            if(prev_ind != -1) dp[i][prev_ind] = max(take,skip);
            return max(take,skip);
    }


    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int n = pairs.size();
        if(n == 1) return 1;
        memset(dp,-1,sizeof(dp));

        return cal(pairs,0,n,-1);


        
    }
};
