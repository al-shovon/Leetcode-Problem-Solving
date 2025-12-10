//137. Single Number II
// Link->https://leetcode.com/problems/single-number-ii
//approch 1-> bit manipulation
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for(int i = 0; i <  32; i++){
            int one = 0;

            for(int j =0; j < nums.size(); j++){
                if((nums[j] & (1<<i)) != 0) one++;
            }

            if(one % 3 != 0){
                result|= (1 << i);

            } 

        }
        return result;
    }
};

//brute force->
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int n = nums.size();
        while(i < n){
            if(i+1 < n && nums[i] == nums[i+1]) i+= 3;
            else return nums[i];

        }
        return nums[i-3];
        
    }
};
