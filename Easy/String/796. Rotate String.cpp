//796. Rotate String
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        s+=s;

        int start = 0;
        int s_size = s.size();
        int goal_size = goal.size();
        
        

        while(start < s_size){
            if(s[start] == goal[0]){
                int i = start;
                int j = 0;

                while(i<s_size && j< goal_size && s[i] == goal[j]){
                    i++;
                    j++;
                }
                if(j == goal_size) return true;
                

            }
            start++;
        }
        return false;


        
    }
};

//app 2

class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size() != goal.size()) return false;
        s+=s;

        if(s.find(goal) != string :: npos) return true;
        return false;


      

        
    }
};
