class Solution {
public:
    vector<int> rearrangeArray(vector<int>& n) {
       vector<int> ans(n) ,v1 , v2;
        for(int i=0; i<n.size(); i++){
            if(n[i]>=0) v1.push_back(n[i]);
            else v2.push_back(n[i]);
        }
        int j=0;
        for(int i=0; i<n.size(); i++){
            ans[i] = v1[j];
            i++;
            ans[i] = v2[j];
            j++;
        }
        v1.clear() , v2.clear();
        return ans;
    }
};