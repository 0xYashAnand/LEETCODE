class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        
        for(int i=0; i<m; i++) res.push_back(nums1[i]);
            
        for(int i=0; i<n; i++) res.push_back(nums2[i]);
           
        nums1.clear();
        
        for(int i=0; i<res.size(); i++) nums1.push_back(res[i]);
        
        res.clear();
        
        sort(nums1.begin() , nums1.end());
        
    }
};