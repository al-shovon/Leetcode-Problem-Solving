//881. Boats to Save People
//app 1 ->tle
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size()-1;
        int ans = 0;
        sort(people.begin(),people.end());

       
        int remain;
        unordered_set<int>ind;

        for(int i = n; i>= 0; i--){
            if(ind.find(i) != ind.end()) continue;
            
            remain = limit - people[i];
            ans++;
            for(int j = i-1; j>= 0; j--){
                if(ind.find(j) != ind.end()) continue;
                if(remain >= people[j]){
                     ind.insert(j);
                     break;
                }
            }
        }
        return ans;

    }
};

//app 2 ->optimized
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size()-1;
        int ans = 0;
        sort(people.begin(),people.end());

        int i = 0;

        while(i < n){
            if(people[i] + people[n] <= limit){
                ans++;
                i++;
                n--;
            }
            else{
                ans++;
                n--;
            }
        }
        if(i == n) ans++;

        return ans;
   
    }
};
