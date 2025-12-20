//3779. Minimum Number of Operations to Have Distinct Elements

class Solution {
public:
    int minOperations(vector<int>& nums) {

        int n = nums.size();

        unordered_set<int>us;
        int ans;

        for(int i = n-1; i >=0; i--){
            if(us.find(nums[i]) == us.end()){
                us.insert(nums[i]);
            }
            else{
                ans = i+1;
                break;
                
            }
        }

        return (ans%3 == 0) ? (ans/3) : (ans/3 +1);
        
    }
};
