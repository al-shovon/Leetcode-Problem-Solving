//1. Two Sum

//rute force ->1
class Solution {
public:
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
};

//app2 little optimized
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
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

      if (index[0] > index[1] )
      {
        int temp = index[0];
        index[0] = index[1];
        index[1] = temp;
      }
      
      
        

        
        

    return index;
        
    }
};

//app 3 optimized
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>m;

        for(int i = 0; i <n; i++){
            int second = target - nums[i];
            if(m.find(second) != m.end()){
                return {i,m[second]};
            }
            else{
                m[nums[i]] = i;
            }
        }
        return {};
        
    }
};
