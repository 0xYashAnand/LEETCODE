class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int t=0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ') t++;
            if(t==k ) break;
            ans+=s[i];
        }
        
        return ans;
    }
};