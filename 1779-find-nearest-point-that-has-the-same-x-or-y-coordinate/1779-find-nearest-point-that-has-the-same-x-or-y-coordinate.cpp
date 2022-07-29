class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& pts) {
        int ans= 20001 , k=-1;
        for(int i=0; i<pts.size(); i++){
           // cout<<pts[i][0]<<" "<<pts[i][1]<<" ";
          if(ans>abs(x - pts[i][0]) + abs(y - pts[i][1])  && (x==pts[i][0] || (y==pts[i][1]))){
             k=i;
             ans = abs(x - pts[i][0]) + abs(y - pts[i][1]) ; 
          } 
        }
        return k;
    }
};

