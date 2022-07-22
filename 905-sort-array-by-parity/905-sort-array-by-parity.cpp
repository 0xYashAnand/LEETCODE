class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
        vector<int> o , e , ans;
        for(int i=0; i<n.size(); i++)
            if(n[i]%2==0) e.push_back(n[i]);
            else o.push_back(n[i]);
        
        for(int i=0; i<e.size(); i++)
           ans.push_back(e[i]);
        
        for(int i=0; i<o.size(); i++)
           ans.push_back(o[i]);
        
        o.clear() , e.clear();
        return ans;
    }
};