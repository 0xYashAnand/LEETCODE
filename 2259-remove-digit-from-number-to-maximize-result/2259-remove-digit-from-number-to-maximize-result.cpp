class Solution {
public:
    string removeDigit(string n, char d) {
        string res = "";
        for(int i=0; i<n.size(); i++)
            if(n[i]==d){
                string temp = n.substr(0, i) + n.substr(i+1);
                res = max(res, temp);
            }
        return res;
    }
};