class Solution {
public:
    int longestContinuousSubstring(string s) {
        int res=0 , ct=1;
        for(int i=0; i<s.size()-1; i++){
            if(s[i+1]-s[i]==1) ct++;
            else{
                res = max(ct , res);
                ct=1;
            } 
        }
        res = max(ct , res);
        return res;
    }
};