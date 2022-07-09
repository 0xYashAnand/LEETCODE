class Solution {
public:
    void reverseString(vector<char>& s) {
        int k = s.size();
        string ans;
        for(int i=0; i<k; i++) ans += s[k-i-1];
        s.clear();
        for(int i=0; i<k; i++) s.push_back(ans[i]);
        ans.clear();
    }
};