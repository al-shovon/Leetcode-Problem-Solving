//977. Squares of a Sorted Array
//app 1 two pointer
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);

        int i = 0, j = n-1;
        int k = n-1;

        while(i <= j){
            if(nums[i]* nums[i] <= nums[j] * nums[j]){
                ans[k] = nums[j] * nums[j];
                k--;
                j--;

            }
            else{
                ans[k] = nums[i] * nums[i];
                k--;
                i++;
            }
        }
        return ans;
        
    }
};

//app 2
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        int min_index = 0;
        int min_val = INT_MAX;

        for(int i = 0; i<n;i++){
            nums[i] = nums[i]*nums[i];
            if(nums[i] <= min_val){
                min_val = nums[i];
                min_index = i;
            }
        }

        vector<int>ans;
        int i = min_index-1, j = min_index;

        while(i>= 0 && j<n){

            if(nums[i] <= nums[j]){
                ans.push_back(nums[i]);
                i--;
            }
            else{
                ans.push_back(nums[j]);
                j++;
            }



        }
        if(i < 0){
            while(j < n){
                ans.push_back(nums[j]);
                j++;
            }
        }
        else{
            while(i >= 0){
                ans.push_back(nums[i]);
                i--;
            }

        }

        return ans;
        

    }
};

//app 3 brute force
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i<n;i++){
            nums[i] = nums[i]*nums[i];
        }

        sort(nums.begin(),nums.end());

        return nums;
        
    }
};
