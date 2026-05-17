//1306. Jump Game III -> c++

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        unordered_set<int>visited_ind;

        queue<int>ind;
        ind.push(start);

        while(!ind.empty()){
            int temp_ind = ind.front();
            int temp_val = arr[temp_ind];
            if(temp_val == 0) return true;
            ind.pop();
            int sum = temp_ind + temp_val;
            int sub = temp_ind - temp_val;
            
            visited_ind.insert(temp_ind);


            if(sum < n &&  visited_ind.find(sum) == visited_ind.end()){
                if(arr[sum] == 0) return true;
                ind.push(sum);
            }
            if(sub >= 0 &&  visited_ind.find(sub) == visited_ind.end()){
                if(arr[sub] == 0) return true;
                ind.push(sub);
            }
            
            



        }
        return false;


        
    }
};
