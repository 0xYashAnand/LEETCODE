class Solution {
public:
    bool canConstruct(string r1, string m1) {
        map<int,int> mp , mp1;
        for(int i=0; i<r1.size(); i++) mp[r1[i]]++;
        for(int i=0; i<m1.size(); i++) mp1[m1[i]]++;
        
        for(int i=0; i<r1.size(); i++) 
            if(mp1[r1[i]]<mp[r1[i]]) return false;
        
        return true;
    }
};