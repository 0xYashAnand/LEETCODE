class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int> vi(m.size(),-1) , vj(m[0].size(),-1);
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[i].size(); j++){
            if(m[i][j]==0) {
                vi[i]=0;
                vj[j]=0;
            }
         }
        }
        
         for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[i].size(); j++){
             if(vi[i]==0|| 0==vj[j]) m[i][j]=0;
          }
         }
    }
};