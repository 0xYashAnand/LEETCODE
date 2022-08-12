class Solution {
public:
    bool detectCapitalUse(string s) {
        int b=0 , sm=0 , k=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z') b++;
            if(s[i]>='a' && s[i]<='z') sm++; 
        }
        if(s[0]>='A' && s[0]<='Z') k++;
        
        if((sm==0 && b==s.size()) || (b==0 && sm==s.size()) || (k==1 && sm==s.size()-1)  ) return true;
        else return false;
    }
};