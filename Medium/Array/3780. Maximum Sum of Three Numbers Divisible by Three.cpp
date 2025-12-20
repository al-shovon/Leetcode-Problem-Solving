//3780. Maximum Sum of Three Numbers Divisible by Three

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int>r0;
        vector<int>r1;
        vector<int>r2;

        for(int i= 0; i<n;i++){
            if(nums[i] % 3 == 0){
                r0.push_back(nums[i]);
            }
            else if(nums[i] % 3 == 1){
                r1.push_back(nums[i]);
            }
            else r2.push_back(nums[i]);
        }
        int ans0 = 0, ans1 = 0,ans2 = 0, ans012 = 0;
        int s1 = r0.size();
        int s2 = r1.size();
        int s3 = r2.size();
        if(s1 >= 3) ans0 = r0[0]+r0[1]+r0[2];
        if(s2 >= 3) ans1 = r1[0]+r1[1]+r1[2];
        if(s3 >= 3) ans2 = r2[0]+r2[1]+r2[2];

        if(s1 >0 && s2 > 0 && s3 > 0){
            ans012 = r0[0]+r1[0]+r2[0];
        }

        return max(ans0,max(ans1,max(ans2,ans012)));
    }
};
