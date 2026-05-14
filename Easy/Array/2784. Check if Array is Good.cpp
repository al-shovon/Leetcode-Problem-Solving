//2784. Check if Array is Good ->c++
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0; i<n;i++){
            if(i != n-1){
                if(i+1 != nums[i]) return false;

            }
            else{
                if(nums[i] != n-1) return false;
            }
        }
        return true;
        
    }
};
