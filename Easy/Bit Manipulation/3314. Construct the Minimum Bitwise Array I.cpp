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
