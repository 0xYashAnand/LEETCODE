class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int ar) {
        vector<int> v(r.size(),0);
        for(int i=0; i<r.size(); i++){
            v[i] = c[i]-r[i];
        }
        
        sort(v.begin(),v.end());
        int cnt=0 , k;
        for(int i=0; i<v.size(); i++){
           
            if(v[i]>0 && ar>0) {
                if(v[i]<ar){
                    ar -= v[i];
                    v[i]=0;
                }
                else{
                    v[i]-=ar;
                    ar=0;
                }
            }
           
        }
        for(int i=0; i<v.size(); i++)
            if(v[i]==0) cnt++;
           
        return cnt;
    }
};