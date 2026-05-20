//2657. Find the Prefix Common Array of Two Arrays
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {

        int n = A.size();

        unordered_set<int>st1;
        unordered_set<int>st2;

        vector<int>ans(n,0);

        for(int i = 0; i<n;i++){

            if(A[i] == B[i]) ans[i] += 1;
            
            else{
                if(st2.find(A[i]) != st2.end()) ans[i]+=1;
                if(st1.find(B[i]) != st1.end()) ans[i]+=1;
                st1.insert(A[i]);
                st2.insert(B[i]);
            }
            if(i > 0) ans[i]+= ans[i-1];
        }
        return ans;
        
    }
};
