// 1288. Remove Covered Intervals 
// O(n^2)
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        int n = intervals.size();
        vector<bool>remove(n,false);
        int count = 0;
        sort(intervals.begin(),intervals.end());

        for(int i = 0; i<n;i++){
            if(remove[i]) continue;
            for(int j = i+1; j<n;j++){
                if(remove[j]) continue;
                int p = intervals[i][0];
                int q = intervals[i][1];
                int x = intervals[j][0];
                int y = intervals[j][1];
                if(x >= p && y<=q){
                    remove[j] = true;
                    count++;
                }
                else if(p>=x && q<=y){
                    count++;
                    break;
                }
            }
        }
        return n-count;
        
    }
};
