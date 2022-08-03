class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        set<int> st;
        for(int i=0; i<n.size(); i++){
            st.insert(n[i]);
        }
        n.clear();
        for (auto itr = st.begin(); itr != st.end(); itr++) {
           n.push_back(*itr) ;
        }
        return st.size();
    }
};