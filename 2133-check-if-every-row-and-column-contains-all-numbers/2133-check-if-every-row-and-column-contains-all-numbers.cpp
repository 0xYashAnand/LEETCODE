class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        
        for(int i=0; i<m.size(); i++){
           map<int,int>mp;
           for(int j=0; j<m.size(); j++)
            mp[m[i][j]]++;
           for(int k=1; k<=m.size(); k++)
            if(mp[k]==0) return false;
          
        }
        for(int i=0; i<m.size(); i++){
           map<int,int>mp;
           for(int j=0; j<m.size(); j++)
            mp[m[j][i]]++;
           for(int k=1; k<=m.size(); k++)
            if(mp[k]==0) return false;
          
        }
        
        return true;
    }
};