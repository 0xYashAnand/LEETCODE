class Solution {
public:
    int arraySign(vector<int>& n) {
        int cnt=0;
        for(int i=0; i<n.size(); i++){
            if(n[i]==0) return 0;
            else if(n[i]<0) cnt++;
        }
        if(cnt%2==1) return -1;
        else return 1;
    }
};