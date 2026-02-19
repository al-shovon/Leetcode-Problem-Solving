//1578. Minimum Time to Make Rope Colorful

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        int n = colors.size();
        int ans = 0;
        
        for(int i = 0; i<n-1;i++){
            if(colors[i] != colors[i+1]) continue;
            int j = i+1;
            int temp = neededTime[i];

            while(j < n && colors[i] == colors[j]){
                ans+= min(temp, neededTime[j]);
                temp = max(temp, neededTime[j]);
                j++;

            }
            i = j-1;


        }
        return ans;

       
        
    }
};

//app-2
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        int n = colors.size();
        int count = 0;

        for(int i =0; i <n-1;){

            int j = i+1;
            int total = neededTime[i];
            int maximum = total;

            while(colors[i] == colors[j]){
                maximum = max(maximum, neededTime[j]);
                total+= neededTime[j];
                j++;
            }
            count+= total - maximum;
            i = j;



        }
        return count;
        
    }
};
