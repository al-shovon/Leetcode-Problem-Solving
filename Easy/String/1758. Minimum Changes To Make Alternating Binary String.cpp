//1758. Minimum Changes To Make Alternating Binary String

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        int ans1 = 0, ans2 = 0;

        for(int i=0;i<n;i++){
            if(i%2 == 0){
                if(s[i] != '0'){
                    ans1++;

                }
                else ans2++;
            }
            else{
                if(s[i] != '1') ans1++;
                else ans2++;
            }
        }
        return min(ans1,ans2);
        
    }
};

//approch 2 ->optimized

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        int ans = 0;

        for(int i=0;i<n;i++){
            if(i%2 == 0){
                if(s[i] != '0'){
                    ans++;
                }
                
            }
            else{
                if(s[i] != '1') ans++;
                
            }
        }
        return min(ans,n -ans);
        
    }
};
