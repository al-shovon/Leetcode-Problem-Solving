//3834. Merge Adjacent Equal Elements

class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
    
        int n = nums.size();

        stack<long long>st;
        st.push(nums[0]);
        int i = 1;
        

        

        while(i < n){
            if(st.top() == nums[i]){
                long long temp = nums[i];
                while(!st.empty() && st.top() == temp){
                    st.pop();
                    temp*=2;
                }
                st.push(temp);
                i++;
            }
            else{
                
             st.push(nums[i]);
                i++;
            }
            
        }
        int size = st.size();
        vector<long long>ans(size);

        for(int i = size-1;i >= 0;i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
