//1624. Largest Substring Between Two Equal Characters

//approch 1
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;
        int n= s.size();

        for(int i = 0; i<n;i++){
            int j = i+1;
            while(j < n){
                if(s[i] == s[j]){
                    ans = max(ans, j-i-1);
                }
                j++;
            }
        }
        return ans;

        
    }
};

//approch 2
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;
        int n= s.size();
        unordered_map<char,int>mp;

        for(int i = 0; i<n;i++){
            
            if(mp.find(s[i]) == mp.end()) mp[s[i]] = i;
            else{
                ans = max(ans, i - mp[s[i]] - 1);
            }
        }
        return ans;

        
    }
};

