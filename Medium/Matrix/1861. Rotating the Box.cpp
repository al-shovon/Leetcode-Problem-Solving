//app 1
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


//app 2 two pointer

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        vector<vector<char>>ans(n,vector<char>(m));

        for(int i = 0; i<m;i++){

            int point_1 = n-1;
            int point_2 = n-1;

            while(point_2 >= 0){
                if(boxGrid[i][point_2] == '*'){
                    point_2--;
                    point_1 = point_2;
                    continue;
                }
                if(boxGrid[i][point_2] == '#'){
                    boxGrid[i][point_2] = '.';
                    boxGrid[i][point_1] = '#';
                    point_2--;
                    point_1--;
                }
                else{
                    point_2--;
                }
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

//app 3 transpose+reverse
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        vector<vector<char>>ans(n,vector<char>(m));

        for(int i = 0; i<m;i++){

            int point_1 = n-1;
            int point_2 = n-1;

            while(point_2 >= 0){
                if(boxGrid[i][point_2] == '*'){
                    point_2--;
                    point_1 = point_2;
                    continue;
                }
                if(boxGrid[i][point_2] == '#'){
                    boxGrid[i][point_2] = '.';
                    boxGrid[i][point_1] = '#';
                    point_2--;
                    point_1--;
                }
                else{
                    point_2--;
                }
            }
        }

        for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
               ans[j][i] = boxGrid[i][j];
            }
        }

        for(int i = 0; i<n;i++){
            reverse(ans[i].begin(), ans[i].end());
        }
        return ans;
        
    }
};
