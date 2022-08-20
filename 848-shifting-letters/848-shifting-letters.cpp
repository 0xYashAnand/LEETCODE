class Solution {
public:
    string shiftingLetters(string s, vector<int>& ct) {
        vector<long long int> pr(ct.size(),0);
        long long int cnt=0;
        for(int i=ct.size()-1; i>=0; i--){
            cnt+=ct[i];
            pr[i] = cnt;
        }
        for(int i=0; i<s.size(); i++){
            long long int ad = pr[i] ;
            if(pr[i]>26) ad = pr[i]%26;
            
            if(int(s[i])+ad>122) s[i] =  ad+s[i]-'z'+'a'-1;
            else s[i]+=ad;
            ad=0;
        }
        
        return s;
    }
};