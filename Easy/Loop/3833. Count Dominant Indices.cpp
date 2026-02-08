//3833. Count Dominant Indices
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        double sum = nums[n-1];
        int count = 0;
        int div = 1;
        for(int i = n-2; i>= 0;i--){
            if(sum/div < nums[i]) count++;
            div++;
            sum+=nums[i];
            
        }
        return count;
        
    }
};
