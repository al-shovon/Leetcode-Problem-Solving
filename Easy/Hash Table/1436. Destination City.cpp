//1436. Destination City

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        unordered_set<string>first;
        for(int i = 0;i<n;i++){
            first.insert(paths[i][0]);
        }

        for(int i = 0;i<n;i++){
            if(first.find(paths[i][1]) == first.end()) return paths[i][1];
        }
        return "";

        
    }
};
