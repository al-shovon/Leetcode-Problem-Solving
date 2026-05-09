//1914. Cyclically Rotating a Grid

class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        int layer = min(m,n) /2;



        for(int i = 0; i<layer;i++){
                    vector<int>nums;

            

            for(int topj  = n-1-i; topj >= i; topj--){
                nums.push_back(grid[i][topj]);
            }

            for(int leftj = i+1; leftj < m-1-i; leftj++){
                nums.push_back(grid[leftj][i]);

            }


            for(int bottomj = i; bottomj <= n-1-i; bottomj++){
                nums.push_back(grid[m-1-i][bottomj]);
            }


            for(int rightj = m-1-i-1; rightj >= i+1; rightj--){
                nums.push_back(grid[rightj][n-1-i]);
            }


            int size = nums.size();

            int min_rotate = k % size;
            
            rotate(nums.rbegin(),nums.rbegin()+ min_rotate, nums.rend());
            int index = 0;

            for(int topj  = n-1-i; topj >= i; topj--){
                grid[i][topj] = nums[index];
                index++;
            }

            for(int leftj = i+1; leftj < m-1-i; leftj++){
                grid[leftj][i] = nums[index];
                index++;

            }


            for(int bottomj = i; bottomj <= n-1-i; bottomj++){
                grid[m-1-i][bottomj] = nums[index];
                index++;
            }


            for(int rightj = m-1-i-1; rightj >= i+1; rightj--){
                grid[rightj][n-1-i] = nums[index];
                index++;
            }

            
        }
        return grid;
        
    }
};
