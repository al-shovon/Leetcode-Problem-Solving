//1832. Check if the Sentence Is Pangram
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        vector<int>letter(26,0);

        for(char i : sentence){
            letter[i - 'a']++;
        }
        for(int i : letter){
            if(i == 0) return false;
        }
        return true;
        
        
    }
};

//app->2
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        unordered_set<char>st;

        for(char i : sentence){
            st.insert(i);
        }
        if(st.size() == 26) return true;
        return false;
        
    }
};
