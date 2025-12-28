//1351. Count Negative Numbers in a Sorted Matrix

class Solution {
public:
void binary_count(vector<int>&grid,int &count, int n2){
    int end = n2 -1;
    int start = 0;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(grid[mid] < 0){
            end = mid-1;
        }
        if(grid[mid] >= 0){
            start = mid+1;
        }
    }
    count+= n2-start;
}

    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;

        for(int i = 0; i<n;i++){
            int n2 = grid[i].size();
            if(grid[i][0] < 0){
                count+=n2;
                continue;
            }
            if(grid[i][n2-1] >= 0) continue;

            binary_count(grid[i],count,n2);

        }
        return count;
        
    }
};
