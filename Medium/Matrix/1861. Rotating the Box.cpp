//1861. Rotating the Box
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        vector<vector<char>>ans(n,vector<char>(m));

        for(int i = 0; i<m;i++){

            int j = 0;
            while(j < n){
                int count = 0;
                while(j < n && boxGrid[i][j] != '*'){
                    if(boxGrid[i][j] == '#'){
                         count++;
                         boxGrid[i][j] = '.';
                    }
                    j++;
                }

                if(count > 0){
                    int temp_j = j-1;
                    while(count > 0){
                        boxGrid[i][temp_j] = '#';
                        temp_j--;
                        count--;

                    }
                }
                if(j <n && boxGrid[i][j] == '*') j++;
            }
        }

        for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
               char letter =  boxGrid[i][j];
               ans[j][m-i-1] = letter;
            }
        }
        return ans;
        
    }
};
