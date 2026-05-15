//1700. Number of Students Unable to Eat Lunch 
//app ->1
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = sandwiches.size();
        int one = count(students.begin(),students.end(),1);
        int zero = n - one;

        for(int i = 0; i<n;i++){
            if(sandwiches[i] == 1) one--;
            else zero--;

            if(one < 0 || zero < 0) return one+zero+1;
        }

        return one+zero;

        
    }
};

//app ->2
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int s = students.size();
        int ind = 0;
        bool check = true;

       if(check){
         for(int i = 0; i< s;i++){
            check = false;
            for(int j = 0; j<s;j++){

                if(students[j] != -1 && students[j] == sandwiches[ind]){
                    ind++;
                    students[j] = -1;
                    check = true;

                }
            }
        }
       }

        return s-ind;
        
    }
};
