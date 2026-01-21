//3314. Construct the Minimum Bitwise Array I

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;

        int n = nums.size();

        for(int i = 0;i<n;i++){
            bool check = false;
           
            for(int j = 1;j<nums[i]; j++){
                if((j | j+1) == nums[i]){
                    ans.push_back(j);
                    check = true;
                    break;
                }

            }
            if(!check) ans.push_back(-1);

        }
        return ans;
        
    }
};


//approch 2 bit manipulation
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
