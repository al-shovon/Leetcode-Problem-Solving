//3379. Transformed Array

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);

        for(int i = 0; i<n;i++){
            int mod = nums[i]%n;
            int index = (i+mod)%n;
            if(index < 0) index+= n;


            ans[i] = nums[index];
        }
        return ans;
    }
};

//ap 2
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);

        for(int i = 0; i<n;i++){
            if(nums[i] > 0){
                int index = (i+nums[i])%n;
                ans[i] = nums[index];
            }
            else if(nums[i] < 0){
                int mod = abs(nums[i]) % n;
                int index = (n - mod+i)%n;
                ans[i] = nums[index];
            }
        }
        return ans;
    }
};
