class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int> vi , vj;
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[i].size(); j++){
            if(m[i][j]==0) {
                vi.push_back(i);
                vj.push_back(j);
            }
         }
        }
        for(int p=0; p<vi.size(); p++)
         for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[i].size(); j++){
             if(i==vi[p] || j==vj[p]) m[i][j]=0;
          }
         }
    }
};