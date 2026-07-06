// 3978. Unique Middle Element
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int pos = n/2;
        int mid = nums[pos];
        int i = pos+1;
        int j = pos-1;
        while(i<n && j>=0){
            if(nums[i] == mid || nums[j] == mid) return false;
            i++;
            j--;
        }
        return true;
        
    }
};
