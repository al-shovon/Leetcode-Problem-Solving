// 3514. Number of Unique XOR Triplets II
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        //return 0;
        
        int n = nums.size();
        unordered_set<int>st(nums.begin(), nums.end());
        
        if(st.size() < 3) return st.size();

        unordered_set<int>st2;

        

        for(auto i: st){
            for(auto j : st){
                if(i == j) continue;
                
                st2.insert(i ^ j);
                

            }
        }
        

        unordered_set<int>st3;

        for(auto i: st){
            for(auto j : st2){
                st3.insert(i^j);
            }
        }
 
 

        return st3.size();
 
    }
};
