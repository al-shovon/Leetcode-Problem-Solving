// 3979. Maximum Valid Pair Sum
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int>max_val(n);
        max_val[n-1] = nums[n-1];
        for(int i = n-2; i>=0;i--){
            max_val[i] = max(max_val[i+1],nums[i]);
            
        }
        int ans = -1;
        for(int i = 0; i<n;i++){
            int j = k+i;
            if(j < n) ans = max(ans,max_val[j]+nums[i]);
        }
        return ans;
    }
};
