//2264. Largest 3-Same-Digit Number in String

class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";

        for(int i = 0;i<num.size();i++){
            if(num[i] == num[i+1] && num[i] == num[i+2]){
                string temp = num.substr(i,3);
                if(temp > ans) ans = temp;
            }
        }
        return ans;
        
    }
};

//2nd approch string(length,char)
class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";

        for(int i = 0;i<num.size();i++){
            if(num[i] == num[i+1] && num[i] == num[i+2]){
                ans = max(ans,string(3,num[i]));
            }
        }
        return ans;
        
    }
};
