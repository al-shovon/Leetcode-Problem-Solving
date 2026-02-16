//3839. Number of Prefix Connected Groups

class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {

        
         unordered_map<string,int> mp;
        int ans = 0;

        for(string w : words){
            if(w.size() >= k){
                mp[w.substr(0,k)]++;
            }
        }

        
        for(auto p : mp){
            if(p.second >= 2) ans++;
        }

        return ans;
        
    }
};
