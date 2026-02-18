//401. Binary Watch

//app->1
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>ans;
        

        for(int i = 0; i< 12;i++){
            for(int j = 0; j< 60;j++){
                
                if(__builtin_popcount(i) + __builtin_popcount(j) == turnedOn){
                    string time = to_string(i) +':' + ((j > 9) ? to_string(j) : ('0' + to_string(j)));
                    ans.push_back(time);
                }
            }
        }

        return ans;
        
    }
};

//app->2
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>ans;

        for(int i = 0; i< 720; i++){
            int hour  = i/60;
            int minute = i%60;

            int h = hour, m = minute;

            
            int count_h = 0;
          
            int count_m = 0;

            while(h != 0){
                if((h & 1) == 1 )count_h++;
                h>>=1;
            }

            while(m != 0){
                if((m & 1) == 1) count_m++;
                m>>=1;
            }
            if(turnedOn == count_m + count_h){
                string t;
                if(minute < 10) t = "0" + to_string(minute);
                else t = to_string(minute);
                string temp = to_string(hour) + ":" + t;
                ans.push_back(temp);

            }

        }
        return ans;
 
    }
};
