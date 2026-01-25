//1984. Minimum Difference Between Highest and Lowest of K Scores

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == 1) return 0;
        sort(nums.begin(),nums.end());
        int ans = nums[n-1] - nums[0];
        

        int s = 0,e = k-1;
        while(e < n){
            ans = min(ans, nums[e] - nums[s]);
            s++;
            e++;
        }
        
        return ans;


        
    }
};
