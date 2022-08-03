class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        map<int, int> mp;
        vector<int> v;
        for(int i=0; i<n.size(); i++){
            mp[n[i]]++;
        }
        for(int i=0; i<n.size(); i++){
            if(mp[n[i]]>0){
                v.push_back(n[i]);
                mp[n[i]]=0;
            }  
            //cout<<n[i]<<" ";
        }
        n.clear();
        
        for(int i=0; i<v.size(); i++){
           // cout<<v[i]<<" ";
              n.push_back(v[i]);
        }
       
        return mp.size();
    }
};