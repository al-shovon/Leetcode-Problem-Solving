#include <iostream>
#include <vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>index;


for (int i = 0; i < nums.size() -1; i++)
{

    for (int j = i+1; j < nums.size(); j++)
    {
        if (nums[i] + nums[j] == target)
        {
            index.push_back(i);
            index.push_back(j);
            return index;
        }
        
    }
    
    
}

    return index;

        
        
    }





vector<int> twoSum_optimized(vector<int>& nums, int target) {

    unordered_map<int,int> value;
    vector<int>index;



    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i];
        int second = target - nums[i];

        if (value.find(second) != value.end())
        {
            index.push_back(i);
            index.push_back(value[second]);
            break;
        }
        else
        {
            value[first] = i;
        }
        
        
    }

    return index;
    








        
        
    }



        vector<int> twoSum2(vector<int>& nums, int target) {

        vector<int>nums2 = nums;

        vector<int>index;

        sort(nums2.begin(), nums2.end());


        int start = 0, end = nums2.size() -1;

        while (start < end)
        {
            if (nums2[start] + nums2[end] == target)
            {
                index.push_back(nums2[start]);
                index.push_back(nums2[end]);
                break;
            }

            else if (nums2[start] + nums2[end] < target)
            {
                start++;
            }
            else end--; 
        }
        int j1 = -1;
      for (int i = 0; i < 2; i++)
      {
        for ( int j = 0; j < nums.size(); j++)
        {
            if (index[i] == nums[j]  && j != j1)
            {
                index[i] = j;
                j1 = j;
                break;
            }
        }
        
      }

    

    return index;
        
    }



 
int main(){

vector<int>num = {-1,-2,-3,-4,-5};
int target = -8;

vector<int> ans  = twoSum_optimized(num,target);

for (int value : ans)
{
    cout<<value<<" ";
}


}


