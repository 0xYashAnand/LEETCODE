class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
       vector<int> res(d.size());
        int k = 1 , ext=0;
        
        for(int i=d.size()-1; i>=0; i--){
            ext = (d[i]+k)/10;
            res[i] = (d[i]+k)%10;
            k=ext;
        }
        if(res[0]==0){
            reverse(res.begin(), res.end());
            res.emplace_back(k);
            reverse(res.begin(), res.end());
        }
        return res;
    }
};