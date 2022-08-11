class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        char k;
        for(int i=0; i<s.size(); i++) 
            mp[s[i]]++;
        
        for(int i=0; i<t.size(); i++) 
            mp[t[i]]++;
        
        for(int i=0; i<t.size(); i++) 
            if(mp[t[i]]%2==1) k=t[i];
        return k;
    }
};