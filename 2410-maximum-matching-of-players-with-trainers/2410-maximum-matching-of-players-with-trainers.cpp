class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int res=0 , i=0 , j=0 , n = p.size() , m = t.size();
        sort(p.begin() , p.end());
        sort(t.begin() , t.end());
        while(i<n && j<m){
            if(p[i]<=t[j]) {
                i++;
                j++;
                res++;
            }
            else j++;
        }
        return res;
        
    }
};