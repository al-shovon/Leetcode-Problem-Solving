// 389. Find the Difference

//Approch - 1 -> bit manipulation
class Solution {
public:
    char findTheDifference(string s, string t) {
        int x_or = t[s.size()];
        for(int i = 0; i < s.size(); i++){
            x_or ^= (s[i] ^ t[i]);
        }
        return (char)(x_or);
        
    }
};




//Approch - 2
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]) return t[i];

        }
        return t[s.size()];
        
    }
};

//Approch - 3
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_t = t[s.size()];
        int sum_s = 0;

        for(int i = 0; i < s.size(); i++){
            sum_s+= s[i];
            sum_t+= t[i];
            
        }
        return (char)(sum_t - sum_s);

        
    }
};
