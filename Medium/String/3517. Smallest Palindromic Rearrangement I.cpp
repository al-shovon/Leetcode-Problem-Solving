// # 3517. Smallest Palindromic Rearrangement I
// # app->1
class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int half = n/2;
        if(n%2 == 0){
            sort(s.begin(),s.begin()+half);
            sort(s.begin()+half,s.end(), greater<int>());
            return s;
        }

        sort(s.begin(),s.begin()+half);
        sort(s.begin()+half+1,s.end(), greater<int>());
        return s;

        
        
    }
};

// # app->2
class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        vector<int>freq(26,0);

        for(int i = 0; i<(n/2);i++){
            freq[s[i]-'a']+=2;
        }
        if(n%2 != 0) freq[s[n/2]-'a']++;

        int i = 0;
        int j = n-1;
        int st = 0;

        while(i<j){

            while(freq[st] > 1){
                s[i] = char(st+'a');
                s[j] = char(st+'a');
                freq[st]-=2;
                i++;
                j--;
                
            }
            st++;
            

        }
        return s;

        
    }
};
