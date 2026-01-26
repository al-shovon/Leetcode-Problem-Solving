//1200. Minimum Absolute Difference

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int min_diff = arr[1] - arr[0];

        for(int i = 2; i<n;i++){
            min_diff = min(min_diff, arr[i] - arr[i-1]);
        }
        vector<vector<int>>ans;
        for(int i =1; i<n;i++){
            if(arr[i] - arr[i-1] == min_diff) ans.push_back({arr[i-1],arr[i]});

        }

        return ans;
        
    }
};

// approch 2
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int min_diff = arr[1] - arr[0];
        vector<vector<int>>ans;
        ans.push_back({arr[0],arr[1]});

        for(int i = 2; i<n;i++){
            int diff = arr[i] - arr[i-1];
            if(diff == min_diff) ans.push_back({arr[i-1],arr[i]});
            else if( diff < min_diff){
                min_diff = diff;
                ans.clear();
                ans.push_back({arr[i-1],arr[i]});
            }
            
        }
        

        return ans;
        
    }
};
