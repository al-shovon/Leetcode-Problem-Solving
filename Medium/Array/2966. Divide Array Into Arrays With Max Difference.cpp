//2966. Divide Array Into Arrays With Max Difference

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int start = 0;

        vector<vector<int>>ans(n/3,vector<int>(3));
        vector<vector<int>>temp;
        for(int i = 0; i< n/3;i++){
            for(int j = 0; j <3; j++){
                if(j == 0){
                     ans[i][j] = nums[start];
                     start++;
                }
                else{
                    if( ((start+1) %3 == 0) && (nums[start] - nums[start-2] >k )) return temp;
                    else ans[i][j] = nums[start];
                    start++;
                }
                

            }
        }

        return ans;
        
    }
};

//
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        

        vector<vector<int>>ans;

        for(int i = 0;i<n;i+= 3){
            if(nums[i+2] - nums[i] > k) return {};
            ans.push_back({nums[i],nums[i+1],nums[i+2]});
            
        }

        return ans;
        
    }
};
