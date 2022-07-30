class Solution {
public:
    int countPairs(vector<int>& n, int k) {
        int ans=0;
        for(int i=0; i<n.size(); i++){
          for(int j=0; j<n.size(); j++){
             if(n[i]==n[j]&& i<j && (i*j)%k==0) ans++;
         }  
        }
        return ans;
    }
};