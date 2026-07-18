//1979. Find Greatest Common Divisor of Array 
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = nums[0];
        int big = nums[0];
        int n = nums.size();
        for(int i = 1; i<n;i++){
            small = min(small,nums[i]);
            big = max(big,nums[i]);

        }
        return __gcd(small,big);
        
    }
};
