class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int sum=0 , j=m.size()-1;
        for(int i=0; i<m.size(); i++){
            if(i!=j) sum += m[i][i] + m[i][j] ;
            else  sum += m[i][i];
            j--;
        }
        return sum;
    }
};