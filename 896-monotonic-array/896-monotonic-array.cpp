class Solution {
public:
    bool isMonotonic(vector<int>& n) {
        int a = n[0] , b=n[n.size()-1] , c=1;
        if(a-b>=0){
            for(int i=0; i<n.size()-1; i++){
                if(n[i]<n[i+1]) c=0;
            }
        }
        else{
            for(int i=0; i<n.size()-1; i++){
                if(n[i]>n[i+1]) c=0;
            }
        }
        if(c==1) return true;
        else return false;
    }
};