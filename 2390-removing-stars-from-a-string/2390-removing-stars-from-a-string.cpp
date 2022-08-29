class Solution {
public:
    string removeStars(string s) {
      int cnt = 0;
      string res ;
      for(int i = s.size()-1;i>=0;i--){
        if(cnt==0 && s[i]!='*')
            res+=s[i];
        if(s[i]=='*')
            cnt++;
        else if(cnt>0)
            cnt--;
    }
    reverse(res.begin(),res.end());
    return res;
    }
};