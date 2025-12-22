//443. String Compression
class Solution {
public:
    int compress(vector<char>& chars) {
 
        int n = chars.size();
        int i = 0,j = 0;
       string ans = "";
        int pos = 0;

        while(i < n){
            j = i;
            while(j < n && chars[i] == chars[j]){
                j++;
            }
            ans+= chars[i];
            
            chars[pos] = chars[i];
            pos++;
            string temp = to_string(j-i);
            if(j-i > 1){

             ans+= temp;
            for(int j = 0; j < temp.size();j++){
                chars[pos] = temp[j];
                pos++;
            }
            }
            i = j;
        }
       // cout<<ans;
        return ans.size();
        
    }
};


//second approch
class Solution {
public:
    int compress(vector<char>& chars) {
         int n = chars.size();
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        char current = chars[i];

        while (i < n && chars[i] == current)
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            chars[index++] = current;
            
        }
        else
        {
            chars[index++] = current;
            
            string count2 = to_string(count);
            for (char val : count2)
            {
                chars[index++] = val;
                
            }
        }
        i--;
    }
    return index;  
    }
};
