//387. First Unique Character in a String
//ap-1
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        queue<int> q;

        for(int i = 0; i < s.size();i++){
            if(m.find(s[i]) == m.end()){
                q.push(i);

            }
            m[s[i]]++;
        
        
        while(q.size( )> 0 && m[s[q.front()]] > 1){
            q.pop();
        }
    }
    return q.empty() ? -1 : q.front();
}
};

//ap-2
class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i < s.size(); i++){
            int c = 1;

            for(int j = 0; j< i; j++ ){
                if(s[i] == s[j]) c++;
                if(c > 1)break;

            }

            for(int j = i+1; j<s.size(); j++ ){
                if(s[i] == s[j]) c++;
                if(c > 1)break;

            }
            if(c==1) return i;

        }
        return -1;
        
    }
};

//ap-3 -> optimized
class Solution {
public:
    int firstUniqChar(string s){
        int n = s.size();
        unordered_map<char,int>mp;

        for(int i = 0; i < n; i++) mp[s[i]]++;
        for(int i = 0; i < n; i++){
            if(mp[s[i]] == 1) return i;
        }
        return -1;

        
    }
};
