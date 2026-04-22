//2452. Words Within Two Edits of Dictionary
class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {

        int n = queries.size();
        int m = dictionary.size();
        int ws = queries[0].size();
        vector<string>ans;

        for(int i = 0; i<n;i++){
            bool check = false;

            for(int j = 0; j<m;j++){

                int count = 0;
                for(int k = 0; k<ws; k++){
                    if(queries[i][k] != dictionary[j][k]) count++;
                    if(count > 2) break;
                }
                if(count <= 2){
                    check = 1;
                    break;
                }
                

            }
            if(check) ans.push_back(queries[i]);
        }
        return ans;
        
    }
};
