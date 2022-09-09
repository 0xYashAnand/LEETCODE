class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
          if (a[0] == b[0]) return a[1] > b[1];
          return a[0] < b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& pi) {
        sort(pi.begin() , pi.end() , comp);
        
        int mx = INT_MIN;
        int cnt=0;
        
        for(int i=pi.size()-1; i>=0; i--){
            if(pi[i][1]<mx) 
                
                cnt++;
            mx = max(mx , pi[i][1]);
        }
        return cnt;
    }
};