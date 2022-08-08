class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        vector<int> result;
        unordered_map<int , int> mp;
        
        for(int i=0; i<n.size(); i++){
            if(mp.find(t-n[i])!=mp.end()){
                result.push_back(i);
                result.push_back(mp[t-n[i]]);
                break;
            }
            mp[n[i]] =i;
        }
        return result;
    }
};

