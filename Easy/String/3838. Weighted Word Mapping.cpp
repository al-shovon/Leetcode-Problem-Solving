//3838. Weighted Word Mapping

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        int n = words.size();
        string ans = "";

        for(int i =0; i<n;i++){
            int ind = 0;
            for(int j = 0; j < words[i].size();j++){
                ind+= weights[words[i][j] - 'a'];
                
            }
            ind%=26;
            ans+= (char)('a'+26-ind-1);
        }
        return ans;
    }
};
