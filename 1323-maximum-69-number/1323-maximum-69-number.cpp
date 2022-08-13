class Solution {
public:
    int maximum69Number (int n) {
        string s = to_string(n);
        int mx , k=n;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='6') s[i]='9';
            k = stoi(s);
            mx = max(mx , k);
            s = to_string(n);
        }
        return mx;
    }
};