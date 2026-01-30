//1422. Maximum Score After Splitting a String
class Solution {
public:
    int maxScore(string s){
        int n = s.size();
        int one = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1') one++;

        }
        int ans = 0;
        int zero =0;
        for(int i =0;i<n-1;i++){
            if(s[i] == '0'){
                zero++;

            }
            else one--;
            ans = max(ans, one +zero);
        }
        return ans;
        
    }
};
