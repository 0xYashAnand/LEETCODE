class Solution {
public:
    string reverseWords(string s) {
      string ans , part;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' ') part += s[i];
            else{
                reverse(part.begin() , part.end());
                ans =ans + part + " ";
                part.clear();
            }
        }
        reverse(part.begin() , part.end());
                ans =ans + part;
                part.clear();
        return ans;
    }
};