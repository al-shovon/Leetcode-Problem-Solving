//744. Find Smallest Letter Greater Than Target

//approch 1 ->binary search
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();

        int st =0, en= n-1;
        char ans = letters[0];

        while(st <= en){
            int mid = st + (en-st)/2;
            if(letters[mid] > target){
                ans = letters[mid];
                en = mid-1;
            }
            else st = mid+1;
        }
        return ans;
        
    }
};

//approch 2 ->array
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();

        for(int i =0;i<n;i++){
            if(letters[i] - target > 0) return letters[i];
        }
        return letters[0];
        
    }
};
