//3637. Trionic Array I

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size()-1;
        bool increase1 = false, increase2 = false, decrease = false;
        int start = 0;

        while(start < n && nums[start] < nums[start+1]){
            start++;
            increase1 = true;

        }
        if(!increase1) return false;

        while(start < n && nums[start] > nums[start+1]){
            start++;
            decrease = true;

        }
        if(!decrease) return false;
        

        while(start < n && nums[start] < nums[start+1]){
            start++;
            increase2 = true;

        }

        return start == n && increase2;

        
        
    }
};
