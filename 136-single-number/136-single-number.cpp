class Solution {
public:
    int singleNumber(vector<int>& n) {
        
        int k=n[0];
            
        for(int i=1; i<n.size(); i++)
            k = k^n[i];
        
        return k;
    }
};