class Solution {
public:
    int partitionString(string s) {
        int ct=0;
        map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]==0) mp[s[i]]++;
            else{
                //cout<<i<<" ";
                mp.clear();
                ct++;
                i--;
            }
        }
        return ct+1;
    }
};