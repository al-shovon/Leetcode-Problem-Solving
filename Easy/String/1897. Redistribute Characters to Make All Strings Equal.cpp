1897. Redistribute Characters to Make All Strings Equal

//app 1
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>ch(26,0);
        int n = words.size();

        for(int i = 0; i<n;i++){
            for(int j = 0; j<words[i].size();j++){
                ch[words[i][j] - 'a']++;
            }
        }

        for(int i = 0; i< 26;i++){
            if(ch[i]% n != 0) return false;
        }
        return true;
        
    }
};

//approch ->3 custom lambda
class Solution {
public:

    bool makeEqual(vector<string>& words) {
        vector<int>ch(26,0);
        int n = words.size();

        for(int i = 0; i<n;i++){
            for(int j = 0; j<words[i].size();j++){
                ch[words[i][j] - 'a']++;
            }
        }

        for(int i = 0; i< 26;i++){
            if(ch[i]% n != 0) return false;
        }

        auto lambda = [&](int fre){
            return fre % n == 0;
         };


        return all_of(ch.begin(),ch.end(),lambda);
        
    }
};
