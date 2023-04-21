class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& mat) {
       map<int , int> lose;
       vector<vector<int>> res;
       set<int> st;
       for(int i=0; i<mat.size(); i++){
               lose[mat[i][1]]++;
               st.insert(mat[i][1]);
               st.insert(mat[i][0]);
            // cout<<mat[i][1]<<" ";
       }
       vector<int> ans , ans2;
       for(auto i: st){
          // cout<<i<<" ";
           if(lose[i]==0) ans.push_back(i);
           else if(lose[i]==1) ans2.push_back(i);
       }
        res.push_back(ans);
        res.push_back(ans2);
        return res;
    }
};