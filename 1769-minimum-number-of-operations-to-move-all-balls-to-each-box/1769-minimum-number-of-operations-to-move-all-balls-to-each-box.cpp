class Solution {
public:
    vector<int> minOperations(string s) {
        vector<int> res ,res1, res2 ;
        int n = s.size() , ct =0  , crt1=0;
        
        for(int i=0; i<n; i++){
            ct+=crt1;
            res1.emplace_back(ct);
            if(s[i]=='1') {
                crt1++;
            }
        }
        
        ct = 0 , crt1=0;
        for(int i=n-1; i>=0; i--){
            ct+=crt1;
            res2.emplace_back(ct);
            if(s[i]=='1') {
                crt1++;
            }
        }
        
        reverse(res2.begin()  , res2.end());
        
        for(int i=0; i<n; i++)
            res.emplace_back(res1[i]+res2[i]);
        
        return res;
    }
};