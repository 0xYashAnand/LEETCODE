class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& w) {
       set<string> st;
       vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ;
        for(int i=0; i<w.size(); i++){
            string temp;
           for(int j=0; j<w[i].size(); j++){
            temp += v[w[i][j]-'a'];
           }
            st.insert(temp);
        }
        
       return st.size();
    }
};