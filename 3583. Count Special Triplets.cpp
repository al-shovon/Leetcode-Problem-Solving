// 3583. Count Special Triplets

//BruteForce -> N^2;
class Solution {
public:
long long mod = 1000000007;

    int specialTriplets(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        for(int s = 1; s < n-1; s++){
            int j = nums[s] * 2;

            int count_i = 0;
            int count_k = 0;

            int i = s-1;
            int k = s+1;
            while(i >= 0){
                if(nums[i] == j) count_i++;
                i--;
            }
            while(k < n){
                if(nums[k] == j) count_k++;
                k++;
            }
            ans = ans +(long long)(count_i * count_k);

        }
        return ans % mod;


        
    }
};


//Optimized -> O(N);

class Solution {
public:
long long mod = 1000000007;

    int specialTriplets(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        unordered_map<int,int>mi;
        unordered_map<int,int>mk;
        mi[nums[0]]++;
        for(int i = 1; i < n; i++){
            mk[nums[i]]++;
        }


       for(int s = 1; s < n-1; s++){
        mk[nums[s]]--;
        int j = nums[s]*2;
        
         long long count_i = 0;
         long long count_k = 0;
         if(mi.find(j) != mi.end()) count_i = mi[j];
         if(mk.find(j) != mk.end()) count_k = mk[j];

          ans = (ans + (count_i * count_k)) % mod;

         mi[nums[s]]++;

        
       }
        return ans;


        
    }
};

