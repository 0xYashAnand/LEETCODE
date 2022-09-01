class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int n = m.size() , p = m[0].size() , i=0 , j=m[0].size()-1;
        while(i<n && j>=0){
            if(m[i][j]==t ) return true;
            else if(m[i][j]>t) j--;
            else i++;
        }
        return false;
    }
};
