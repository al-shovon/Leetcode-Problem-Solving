//3315. Construct the Minimum Bitwise Array II

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums){
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(nums[i] == 2) nums[i] = -1;
            else{
                
                for(int j = 0; j<32;j++){
                    if((nums[i] & (1<<j)) > 0) continue;
                    else{
                        nums[i] = (nums[i] ^ (1<<(j-1)));
                        break;

                    }

                }

            }
        
        }
        return nums;
        
    }
};
