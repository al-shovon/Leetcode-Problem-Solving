//1784. Check if Binary String Has at Most One Segment of Ones
class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        int st = 0;
        while(st < n && s[st] != '0')st++;
        for(int i = st+1; i<n;i++) if(s[i] == '1') return false;
        return true;
    }
};
