//2553. Separate the Digits in an Array
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;

        int n = nums.size();

        for(int i = 0; i<n;i++){
            string temp = to_string(nums[i]);
            for(int j = 0; j<temp.size(); j++){
                ans.push_back((temp[j] - '0'));
            }
        }
        return ans;
        
    }
};
