// 2161. Partition Array According to Given Pivot
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        int n = nums.size();
        int count = 0;
        vector<int>left;
        vector<int>right;

        for(int i = 0; i<n;i++){
            if(nums[i] == pivot) count++;
            else if(nums[i] < pivot) left.push_back(nums[i]);
            else right.push_back(nums[i]);


        }
        int st = 0;

        for(auto i: left){
            nums[st] = i;
            st++;
        }
        for(int i = 0; i<count;i++){
            nums[st] = pivot;
            st++;
        }
        for(auto i: right){
            nums[st] = i;
            st++;
        }

        return nums;
        
    }
};
