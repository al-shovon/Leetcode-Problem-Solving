//1855. Maximum Distance Between a Pair of Values
//app1-> two pointer+greedy
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() - 1;
        int n2 = nums2.size() - 1;

        int ans = 0;
        
        while(n1 >= 0 && n2 >= 0){
            if(nums2[n2] >= nums1[n1]){
                ans = max(ans, n2-n1);
                n1--;
            }
            else n2--;
        }

        return ans;
    }
};

//app2  tle
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        int ans = 0;

        for(int i = 0;i<n1;i++){
            for(int j = n2-1; j >= i && ans< j-i;j--){
                if(nums2[j] >= nums1[i]) ans = max(ans,j-i);
            }
        }
        return ans;
    }
};
