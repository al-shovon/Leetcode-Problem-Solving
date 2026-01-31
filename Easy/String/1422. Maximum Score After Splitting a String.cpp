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


//ap 2
class Solution {
public:
    int maxScore(string s){
        int n = s.size();
        int one = count(s.begin(),s.end(),'1');
        
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

//ap 3 -> 1 lopp
class Solution {
public:
    int maxScore(string s){
        int n = s.size();
        
        int ans = INT_MIN;
        int one_total = 0, zero_left =0;
        for(int i = 0;i<n-1;i++){
            if(s[i] == '0'){
                zero_left++;
                
            }
            else {
                one_total++;
   
            }
            ans = max(ans,zero_left-one_total);
        }
        if(s[n-1] == '1') one_total++;

        return ans + one_total;
        
    }
};

