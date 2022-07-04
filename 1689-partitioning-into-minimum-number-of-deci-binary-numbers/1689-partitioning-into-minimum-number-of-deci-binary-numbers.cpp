class Solution {
public:
    int minPartitions(string n) {
        int ans=0 ;
        sort(n.begin() , n.end());
        ans = abs(48-n[n.length()-1]);
        return ans;
    }
};