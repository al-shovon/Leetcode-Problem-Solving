//1160. Find Words That Can Be Formed by Characters

class Solution {
public:

    int good_string(string &word, unordered_map<char,int>um, int &ans){
        for(int i = 0; i <word.size();i++){
            um[word[i]]--;
            if(um[word[i]] < 0) return 0;

        }
        return word.size();

    }
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>um;

        for(int i = 0; i<chars.size();i++){
            um[chars[i]]++;
        }

        int ans = 0;

        for(int i = 0; i<words.size();i++){
            ans+= good_string(words[i], um, ans);
        }
        return ans;
        
    }
};
