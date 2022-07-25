class Solution {
public:
    vector<int> searchRange(vector<int>& n, int t) {
      vector<int> res;
        for(int i=0; i<n.size(); i++){
            if(n[i]==t){
                res.push_back(i);
                break;
            }
            
        }
         for(int i=0; i<n.size(); i++){
            if(n[n.size()-i-1]==t){
                res.push_back(n.size()-i-1);
                break;
            }
            
        }
        
       if(res.size()==1) {
           res.push_back(res[0]);
       }
       
        if(res.size()==0) {
           res.push_back(-1);
           res.push_back(-1);
       }
        return res;
    }
};