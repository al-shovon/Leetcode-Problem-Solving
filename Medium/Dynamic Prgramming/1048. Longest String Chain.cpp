//1048. Longest String Chain
class Solution {
public:
int n;
    int dp[1001][1001];
    static bool comp( string a,  string b){
        return a.size() < b.size();
    }

    int cal(vector<string>& words, int i,int prev){

        if(i == n) return 0;
        if(prev != -1 && dp[i][prev] != -1) return dp[i][prev];

        int take;
        bool check = false;

        if(prev == -1){
            take = 1+ cal(words,i+1,i);

        }
        else if(words[prev].size()+1 != words[i].size()){
            take =  cal(words,i+1,prev);
            
        }
        else{
            int curr_s = words[i].size();
            int prev_s = 0;
            int j = 0;
            while(j < curr_s){
                if(words[i][j] == words[prev][prev_s]){
                    j++;
                    prev_s++;
                }
                else j++;
                if(prev_s+1 == curr_s){
                    check = true;
                    break;
                }
            }
            if(check) take = 1+ cal(words,i+1,i);
            else take = cal(words,i+1,prev);


        }


        int skip = cal(words,i+1,prev);
        if(prev != -1) dp[i][prev] = max(take,skip);

        return max(take,skip);

    }

    int longestStrChain(vector<string>& words) {

        sort(words.begin(),words.end(), comp);
        n = words.size();
        memset(dp,-1,sizeof(dp));
        
        return cal(words,0,-1);

        
    }
};
