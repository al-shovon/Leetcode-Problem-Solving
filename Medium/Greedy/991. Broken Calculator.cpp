//991. Broken Calculator

//app 1
class Solution {
public:
    int brokenCalc(int startValue, int target) {

        if(target <= startValue) return startValue - target;
        int count = 0;

        while(target > startValue){
            if(target % 2 == 0) target/=2;
            else target++;
            count++;
        }
        count+= startValue - target;
        return count;
        
    }
};

//app 2
class Solution {
public:
    int brokenCalc(int startValue, int target) {

        if(target <= startValue) return startValue - target;
        if(target%2 == 0) return 1+ brokenCalc(startValue, target/2);
        return 1+ brokenCalc(startValue, target+1);
    }
};
