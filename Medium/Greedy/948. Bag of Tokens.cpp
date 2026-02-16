//948. Bag of Tokens
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        if(n == 0) return 0;

        sort(tokens.begin(),tokens.end());

        if(tokens[0] > power) return 0;
        int ans = 1;
        power-=tokens[0];
        int i = 1, j = n-1;
        int temp = ans;

        while(i <= j){
            if(tokens[i] <= power){
                temp++;
                power-=tokens[i];
                i++;

            }
            else{
                power+=tokens[j];
                temp--;
                j--;
            }
            ans = max(ans,temp);

        }
        return ans;

    }
};
