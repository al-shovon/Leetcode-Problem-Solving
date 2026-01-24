//1877. Minimize Maximum Pair Sum in Array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        int i =0;
        int j = n-1;
        int ans = nums[i]+nums[j];
        i++;
        j--;

        while(i < j){
            ans = max(ans,nums[i]+nums[j]);
            i++;
            j--;

        }
        
        return ans;
    }
};
