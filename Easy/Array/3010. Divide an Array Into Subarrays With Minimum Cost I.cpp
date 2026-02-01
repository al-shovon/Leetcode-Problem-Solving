//3010. Divide an Array Into Subarrays With Minimum Cost I

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];

        int min1 = 51, min2 = 52;

        for(int i = 1;i<n;i++){
            if(nums[i] < min1){
                min2 = min1;
                min1 = nums[i];

            }
            else min2 = min(min2,nums[i]);

        } 
        return ans+min1+min2;
        
    }
};
