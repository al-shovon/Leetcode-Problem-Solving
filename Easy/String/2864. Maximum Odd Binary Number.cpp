//2864. Maximum Odd Binary Number
//app 1

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();

        int one = count(s.begin(),s.end(),'1');
        string ans = "";
        for(int i = 0; i<n-1; i++){
           if(i < one-1) ans+= '1';
           else ans+= '0';

        }


        return ans+='1';
        
    }
};
