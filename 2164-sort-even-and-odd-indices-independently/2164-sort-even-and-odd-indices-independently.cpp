class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& n) {
       vector<int> o , e , ans;
        for(int i=0; i<n.size(); i++)
            if(i%2==0) e.push_back(n[i]);
            else o.push_back(n[i]);
        
        sort(e.begin() , e.end());
        sort(o.begin() , o.end());
        reverse(o.begin() , o.end());
        
        int j=0 , k=0;
        for(int i=0; i<n.size(); i++){
           if(i%2==0) {
               ans.push_back(e[j]);
               j++;}
            else {
               ans.push_back(o[k]);
               k++;}
        }
        o.clear() , e.clear();
        return ans;
            
    }
};