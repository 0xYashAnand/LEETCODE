class Solution {
public:
    double average(vector<int>& s) {
        double ans;
        sort(s.begin(), s.end());
        for(int i=0; i<s.size(); i++){
            ans+=s[i];
        }
        
        ans = ans -s[0]-s[s.size()-1];
        return ans/(s.size()-2);
    }
};