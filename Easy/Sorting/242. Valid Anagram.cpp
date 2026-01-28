//242. Valid Anagram
 class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
       sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
        
       
    }
};

//ap 2
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        
        for(auto i: s){
            mp[i]++;
        }
        for(auto i: t){
            mp[i]--;
            if(mp[i] < 0) return false;
        }
        for(auto i: s){
            if(mp[i] != 0) return false;
        }
        
        
        return true;
        
    }
};
