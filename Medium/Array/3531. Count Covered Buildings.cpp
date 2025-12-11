// 3531. Count Covered Buildings
//Link-> https://leetcode.com/problems/count-covered-buildings?envType=daily-question&envId=2025-12-11


class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

        unordered_map<int,pair<int,int>>mx; // x  constant
        unordered_map<int,pair<int,int>>my; // y constant
        
        for(int i=0; i < buildings.size(); i++){
            int x = buildings[i][0];
            int y = buildings[i][1];

            if(mx.find(x) == mx.end()) mx[x] = {y,y};
            else{
                mx[x].first = max(mx[x].first, y);
                mx[x].second = min(mx[x].second, y);
            }

            if(my.find(y) == my.end()) my[y] = {x,x};
            else{
                my[y].first = max(my[y].first, x);
                my[y].second = min(my[y].second, x);
            }
        }
        int count = 0;

        for(int i=0; i < buildings.size(); i++){
            int x = buildings[i][0];
            int y = buildings[i][1];

            if(y < mx[x].first && y > mx[x].second && x < my[y].first && x > my[y].second) count++;
        }
        return count;


        
    }
};
