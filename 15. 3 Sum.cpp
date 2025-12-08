//15. 3 Sum.cpp
//https://leetcode.com/problems/3sum

//method 1;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(),nums.end());
        set<vector<int>>s;

        for(int i = 0; i < n; i++){
            int remain = -nums[i];
            int start = i+1;
            int end = n-1;

            while(start < end){
                int sum = nums[start] + nums[end];

                if(remain == sum){
                    
                    s.insert({nums[i],nums[start],nums[end]});
                    start++;
                    end--;

                }
                else if(sum > remain) end--;
                else start++;
            }
        }

        vector<vector<int>>ans;

        for(auto i : s){
            ans.push_back(i);
        }
        return ans;
        
    }
};

//Method 2

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(),nums.end());
        set<vector<int>>s;

        for(int i = 0; i < n; i++){
            int remain = -nums[i];
            int start = i+1;
            int end = n-1;

            while(start < end){
                int sum = nums[start] + nums[end];

                if(remain == sum){
                    
                    s.insert({nums[i],nums[start],nums[end]});
                    start++;
                    end--;

                }
                else if(sum > remain) end--;
                else start++;
            }
        }

        vector<vector<int>>ans;

        for(auto i : s){
            ans.push_back(i);
        }
        return ans;
        
    }
};

//Brute force
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
           int n = nums.size();
   set<vector<int>> value;
   vector<vector<int>>ans;

    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (nums[i]+nums[j]+nums[k] == 0)
                {
                    vector<int>temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(),temp.end());

                    if (value.find(temp) == value.end())
                    {
                        value.insert(temp);
                        ans.push_back(temp);
                    }
                    
                }
                
                
            }
        
        }
        
    }
    return ans;
        
    }
};
