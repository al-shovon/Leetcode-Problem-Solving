//1345. Jump Game IV
class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if(n==1) return 0;
        if(arr[0] == arr[n-1]) return 1;

        unordered_map<int, unordered_set<int>>mp;

        for(int i = 0; i<n;i++){
            mp[arr[i]].insert(i);
        }

        vector<bool>check(n,false);

        queue<pair<int,int>>q;
        

        q.push({0,0});
        check[0] = true;

        while(!q.empty()){
            int index = q.front().first;
            int step = q.front().second;
            int val = arr[index];

            if(index == n-1) return step;
            q.pop();

            if(index-1 >= 0 && !check[index-1]){
                q.push({index-1, step+1});
                check[index-1] = true;
            }

            if(index+1 < n && !check[index+1]){
                q.push({index+1, step+1});
                check[index+1] = true;
            }

            for(auto i : mp[val]){
                if(!check[i]){
                q.push({i,step+1});
                check[i] = true;
                }

            }
            mp[val].clear();


        }

        return n-1;


        
    }
};
