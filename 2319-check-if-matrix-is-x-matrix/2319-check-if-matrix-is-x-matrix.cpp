class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int k = grid.size() , cnt=0;
        
        for(int i=0; i<k; i++){
               if((grid[i][i]==0) || (grid[i][k-i-1]==0)) return false;
        }
        for(int i=0; i<k; i++){
            for(int j=0; j<k; j++)
               if(i!=j && j!=k-i-1 && grid[i][j]!=0) {
                   return false;}
        }
        return true;
    }
};

