// 1732. Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int ans = 0;
        int start = 0;
        for(auto i : gain){
            start+=i;
            ans = max(ans,start);


        }
        return ans;
        
    }
};
