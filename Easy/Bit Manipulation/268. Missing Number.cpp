//268. Missing Number
//app 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        sort(nums.begin(),nums.end());
        for(int  i = 0; i < n; i++ ){
            
            if(i != nums[i] ){
                return i;

            
            }
        }
        return n;
        
    }
};

//app 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int xora = 0;
        for(int i = 0; i<n;i++) xora ^= (i ^ nums[i]);
        return xora;
        
    }
};

//app 3 binary search
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

       sort(nums.begin(),nums.end());

       int l = 0, r = n-1;
       int result = 0;

       while(l <= r){
        int mid = l + (r-l)/2;

        if(nums[mid] > mid){
            r = mid-1;
            
        }
        else{
            l = mid + 1;
            result = mid+1;
        }
       }
       return result;
        
    }
};
