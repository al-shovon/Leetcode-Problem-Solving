//48. Rotate Image
//app-> 1
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i = 0; i<n;i++){
            for(int j = i; j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // for(int i = 0;i<n;i++){
        //     for(int j = 0; j< n/2; j++){
        //         swap(matrix[i][j], matrix[i][n-j-1]);
        //     }
        // }
        for(int i = 0; i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        
    }
};

//app->2
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>>temp(n,vector<int>(n));

        for(int i = 0; i<n;i++){
            for(int j = 0;j<n;j++){
                temp[j][n-i-1] = matrix[i][j];
            }
        }

        matrix = temp;
        
    }
};
