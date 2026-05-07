//3660. Jump Game IX

class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int>left_max(n);
        vector<int>ans(n);
        
        left_max[0] = nums[0];


        for(int i = 1; i<n;i++){
            left_max[i] = max(nums[i], left_max[i-1]);
        }
        vector<int>right_min(n);
        right_min[n-1] = nums[n-1];


        for(int i = n-2; i>=0; i--){
            right_min[i] = min(nums[i], right_min[i+1]);
            
        }
        ans[n-1] = left_max[n-1];

        for(int i = n-2; i>= 0;i--){
            if(right_min[i+1] >= left_max[i]){
                ans[i] = left_max[i];
            }
            else ans[i] = ans[i+1];

           
        }
        return ans;


        
    }
};
