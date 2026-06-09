// 3689. Maximum Total Subarray Value I
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        int max_val = nums[0];
        int min_val = nums[0];

        for(auto i : nums){
            max_val = max(max_val,i);
            min_val = min(min_val,i);
        }
        long long ans = max_val - min_val;

        return (ans*k);
        
    }
};
