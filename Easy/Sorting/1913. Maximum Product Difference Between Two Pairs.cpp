//1913. Maximum Product Difference Between Two Pairs

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n = nums.size();

        return nums[0]*nums[1] - nums[n-1]*nums[n-2];
        
    }
};


//approch 2

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int n = nums.size();

        int s1=10001,s2 = 10002,m1 = 0,m2 = -1;

        for(int i =0;i<n;i++){
            if(nums[i] < s1){
                s2 = s1;
                s1 = nums[i];
                
            }
            else s2 = min(s2,nums[i]);
            if(nums[i] > m1){
                m2 = m1;
                m1 = nums[i];  
            }
            else m2 = max(m2,nums[i]);
        }

        return m1*m2 - s1*s2;
        
    }
};
