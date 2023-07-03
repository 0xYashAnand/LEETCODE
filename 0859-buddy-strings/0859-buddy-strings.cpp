class Solution {
public:
    bool buddyStrings(string A, string B) {
        
        if (A.size() != B.size()) return false;
        
        int numChar_A = unordered_set<char>(A.begin(), A.end()).size();
        if (A == B && numChar_A < B.size()) return true;
        
        vector<int> id;
                        
        for (int i = 0; i < A.size(); i++) {
          if (A[i] != B[i]) id.push_back(i);
          if (id.size() > 2) return false;
        } 
        
        return id.size() == 2 &&
               A[id[0]] == B[id[1]] &&
               A[id[1]] == B[id[0]];      
    }
};