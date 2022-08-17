class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& r) {
        int mn;
        vector<int> v;
        for(int i=0; i<r.size(); i++){
            mn =  min(r[i][0] , r[i][1]);
            v.push_back(mn);
        }
        
        sort(v.begin() , v.end());
        mn=0;
        
        for(int i=0; i<r.size(); i++)
            if(v[v.size()-1]==v[i]) mn++;
        return mn;
    }
};