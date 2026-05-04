//3005. Count Elements With Maximum Frequency
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>freq;
        int max_freq = 1;
        int count = 0;

        for(int i = 0; i<n;i++){
            freq[nums[i]]++;
            if(freq[nums[i]] == max_freq) count++;
            else if(freq[nums[i]] > max_freq){
                max_freq = freq[nums[i]];
                count = 1;
            }
        }
        return count* max_freq;
        
    }
};
