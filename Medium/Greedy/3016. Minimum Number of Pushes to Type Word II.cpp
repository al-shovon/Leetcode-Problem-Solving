// 3016. Minimum Number of Pushes to Type Word II
class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        vector<int>freq(26,0);

        for(auto i: word){
            freq[i - 'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int push = 0;
        for(int i = 0; i<26;i++){
            if(i/8 == 1) freq[i]*=2;
            if(i/8 == 2) freq[i]*=3;
            if(i/8 == 3) freq[i]*=4;
            push+= freq[i];

        }
        return push;
        
    }
};
