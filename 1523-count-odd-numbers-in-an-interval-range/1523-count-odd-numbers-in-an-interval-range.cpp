class Solution {
public:
    int countOdds(int l, int h) {
        int res=0;
        for(int i=l; i<=h; i++)
            if(i%2) res++;
        return res;
    }
};