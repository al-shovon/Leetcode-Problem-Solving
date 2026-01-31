//1496. Path Crossing
//method 1

class Solution {
public:
    bool isPathCrossing(string path) {
        vector<pair<int,int>>st;
        int x = 0,y =0;
        st.push_back({0,0});

        for(int i= 0; i<path.size();i++){
            if(path[i] == 'E') x++;
            else if(path[i] == 'S') y--;
            else if(path[i] == 'W') x--;
            else if(path[i] == 'N') y++;

            for(int j =0; j<st.size();j++){
                if(st[j].first == x && st[j].second == y) return true;
            }
            st.push_back({x,y});


        }
        return false;
        
    }
};

//Method 2
class Solution {
public:
    bool isPathCrossing(string path) {
       
        int x = 0,y =0;
        unordered_set<string>st;
        st.insert("0_0");

        for(int i= 0; i<path.size();i++){
            if(path[i] == 'E') x++;
            else if(path[i] == 'S') y--;
            else if(path[i] == 'W') x--;
            else if(path[i] == 'N') y++;
            string temp = to_string(x) +"_" + to_string(y);

            if(st.find(temp) != st.end()) return true;

            else st.insert(temp);


        }
        return false;
        
    }
};
