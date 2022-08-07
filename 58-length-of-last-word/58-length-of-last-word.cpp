class Solution {
public:
    int lengthOfLastWord(string s) {
        
        string str;
        reverse(s.begin(),s.end());
        
        for(int i=0; i<s.size(); i++)
            if(s[i]!=' ')   str +=s[i];
            else if(str.size()>0)   break;
          
        return str.size();
    }
};