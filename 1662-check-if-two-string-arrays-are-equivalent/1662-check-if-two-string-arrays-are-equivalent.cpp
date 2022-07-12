class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a1 , a2;
        for(int i=0; i<word1.size(); i++){
            a1 += word1[i];
        }
         for(int i=0; i<word2.size(); i++){
            a2 += word2[i];
        }
       // cout<<a1<<" "<<a2<<endl;
        if(a1==a2) return 1;
        else return 0;
    }
};