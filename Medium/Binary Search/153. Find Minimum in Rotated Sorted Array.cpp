//153. Find Minimum in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int st = 0;
        int end = n-1;


        while(st < end){
            int mid = st + (end-st)/2;

            if(nums[mid] > nums[end]){
                st = mid+1;
            }

           
            else {
                end = mid;
            }

        }
        return nums[st];
        
    }
};

//app 2
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int st = 0;
        int end = n-1;
        int ans = 5001;

        while(st <= end){
            int mid = st + (end-st)/2;

            if(nums[end] > nums[st] && nums[mid] >= nums[st]){
                ans = min(ans,nums[st]);
                end = mid-1;
            }

            else if(nums[end] < nums[st] && nums[end] >= nums[mid]){
                
                ans = min(ans,nums[mid]);
                end = mid-1;
            }
            else {
                ans = min(ans,nums[mid]);
                st = mid+1;
            }

        }
        return ans;
        
    }
};
