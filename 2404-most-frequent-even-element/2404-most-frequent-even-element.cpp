class Solution {
public:
    int mostFrequentEven(vector<int>& n) {
        int res=-1 , mx = -1;
        map<int,int> mp;
        for(int i=0; i<n.size(); i++){
            if(n[i]%2==0) mp[n[i]]++;
        }
        for(auto it:mp){
            if(mx<it.second) res = it.first;
            mx =max(mx , it.second);
        }
        return res;
    }
};