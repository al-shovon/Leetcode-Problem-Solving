//3043. Find the Length of the Longest Common Prefix
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        int n1 = arr1.size();
        int n2 = arr2.size();
        int ans = 0;

        unordered_set<int>st1;
        unordered_set<int>st2;

        for(int i = 0; i<n1;i++){
            while(arr1[i] > 0){
                st1.insert(arr1[i]);
                arr1[i] /= 10;
            }
        }
        for(int i = 0; i<n2;i++){
            while(arr2[i] > 0){
                st2.insert(arr2[i]);
                arr2[i] /= 10;

            }
        }

        for(auto i : st1){
            if(st2.find(i) != st2.end()) ans = max(ans,i);
        }
        if(ans == 0) return 0;

        string answer = to_string(ans);
        

        return answer.size();
        
    }
};
