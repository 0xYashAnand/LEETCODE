class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& c) {
     
        string res;
        int n=s.size() , st , en , dr , ct=0;
        vector<int> v(n+1,0);
        for(int i=0; i<c.size(); i++){
            st = c[i][0] , en = c[i][1] , dr = c[i][2];
            if(dr==1){
                v[st]++;
                v[en+1]--;
            }
            else{
                v[st]--;
                v[en+1]++;
            }
        }
        
        for(int i=1; i<=n; i++) v[i] += v[i-1];
        for(int i=0; i<n; i++){
            ct = (s[i]+v[i]-'a')%26;
            ct = (ct+26)%26;
            res += 'a'+ct;
        }
        return res;
    }
};
