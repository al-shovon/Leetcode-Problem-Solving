//3840. House Robber V
//app - 1
public:
    long long rob(vector<int>& nums, vector<int>& colors) {

        int n = nums.size();
        long long ans =0;

        for(int i = 0;i<n;i++){
            
                long long prev = 0;
                long long prev1 = nums[i],an = nums[i];
                int s = i+1;

                while(s < n && colors[i] == colors[s]){

                    an = max(1LL * nums[s] + prev, prev1);
                    prev = prev1;
                    prev1 = an;
                    s++;
                    
                    
                }
                ans+= an;
                i  = s-1;
    
        }
        return ans;
        
    }
};

//app 2
public:
    long long rob(vector<int>& nums, vector<int>& colors) {

        int n = nums.size();
        long long ans =0;

        for(int i = 0;i<n;i++){
            int s = i, e = i;
            while(e < n && colors[s] == colors[e]) e++;
            if(e-s == 0){
                ans+= nums[s];
            }
            else{
                long long prev = 0;
                long long prev1 = nums[s],an = nums[s];

                for(int j = s+1; j<e;j++){

                    an = max(1LL * nums[j] + prev, prev1);
                    prev = prev1;
                    prev1 = an; 
                }
                ans+= an;
                i  = e-1;   
            }
        }
        return ans;
        
    }
};
