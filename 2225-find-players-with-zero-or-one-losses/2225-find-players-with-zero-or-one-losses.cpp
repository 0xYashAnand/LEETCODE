class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& mat) {
       map<int , int> win , lose;
       vector<vector<int>> res;
        set<int> st;
       for(int i=0; i<mat.size(); i++){
               win[mat[i][0]]++;
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
        sort(ans.begin(),ans.end()); 
        sort(ans2.begin(),ans2.end());
        res.push_back(ans);
        res.push_back(ans2);
        return res;
    }
};