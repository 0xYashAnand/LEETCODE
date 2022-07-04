class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1 , s=0 , d;
        while(n>0){
            d = n%10;
            n = n/10;
            p *= d;
            s += d;
        }
        return p-s;
    }
};