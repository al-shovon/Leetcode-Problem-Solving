//3761. Minimum Absolute Distance Between Mirror Pairs

class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {

        int n = nums.size();

        int ans = -1;

        unordered_map<string,int>mp;


        for(int i = 0; i<n;i++){
            string temp = to_string(nums[i]);
            if(mp.find(temp) != mp.end()){
                if(ans == -1) ans = i - mp[temp];
                else ans = min(ans, i-mp[temp]);
            
            }
            int temp_n = nums[i];
            while(temp_n % 10 == 0){
                temp_n/=10;
            }
            temp = to_string(temp_n);
            
            reverse(temp.begin(),temp.end());
            mp[temp] = i;
            



        }
        return ans;
        
    }
};

