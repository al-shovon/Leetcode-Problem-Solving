3634. Minimum Removals to Balance Array

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();

        int max_length = 1;
        int i = 0, j =1;
        sort(nums.begin(),nums.end());

        while(j < n){
            if(1LL*nums[i]*k >= nums[j]){
               max_length =  max(max_length, j-i+1);
                j++;
            }
            else i++;

        }
        return n- max_length;
        
    }
};
