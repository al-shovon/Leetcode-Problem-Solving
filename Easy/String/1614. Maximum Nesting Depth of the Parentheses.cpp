//1614. Maximum Nesting Depth of the Parentheses ->c++
class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int temp = 0;
        
        for(char i : s){

            if(i == '(') temp++;
            else if(i == ')') temp--;

            ans = max(ans,temp);


        }
        return ans;
        
    }
};
