class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string k = to_string(n);
        sort(k.begin(),k.end());
        
        vector<string> v(31);
        for(int i=0; i<31; i++){
            int l ;
            string m;
            l = pow(2,i);
            m = to_string(l);
            v[i] = m;
        }
        for(int i=0; i<31; i++)
           sort(v[i].begin(),v[i].end()); 
        
        for(int i=0; i<31; i++)
            if(v[i]==k) return true;
        
        return false;
    }
};