class Solution {
public:
    string replaceDigits(string s) {
        
        int j;
        for(int i=0; i<s.size(); i++)
            if(i%2!=0) {
                j = s[i]-'0';
                s[i] = s[i-1]+j;
            }
        
        return s;
    }
};