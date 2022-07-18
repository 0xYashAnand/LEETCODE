class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int rk , cnt=0;
        if(ruleKey=="type") rk = 0;
        else if(ruleKey == "color") rk = 1;
        else rk =2;
        
        for(int i=0; i<items.size(); i++){
           //for(int j=0; j<items[i].size(); j++){
              if(items[i][rk]==ruleValue) cnt++;
           //} 
        }
        
        return cnt;
    }
};