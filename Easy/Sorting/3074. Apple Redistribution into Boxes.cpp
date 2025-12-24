//3074. Apple Redistribution into Boxes
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();
        int app = 0;
        for(int i =0; i<n;i++) app+= apple[i];
        sort(capacity.begin(),capacity.end(),greater<int>());
        for(int i =0; i<m;i++){
            app-=capacity[i];
            if(app <= 0) return i+1;
        }
        return 0;


    }
};
