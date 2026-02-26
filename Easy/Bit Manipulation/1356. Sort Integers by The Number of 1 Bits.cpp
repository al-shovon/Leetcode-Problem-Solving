//1356. Sort Integers by The Number of 1 Bits
//app 1
class Solution {
public:

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(), [](int a,int b){
            if(__builtin_popcount(a) != __builtin_popcount(b)){
            return __builtin_popcount(a) < __builtin_popcount(b);
        }
        else return a < b;

        });
        return arr;
        
    }
};

//app 2
class Solution {
public:
    static bool comp(int &a,int &b){
        if(__builtin_popcount(a) != __builtin_popcount(b)){
            return __builtin_popcount(a) < __builtin_popcount(b);
        }
        else return a < b;

    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
        
    }
};
