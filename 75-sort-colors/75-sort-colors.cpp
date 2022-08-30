class Solution {
public:
    void sortColors(vector<int>& n) {
        
        int i=0 , j=n.size()-1 , k=0;
        while(i<=j){
            if(n[i]==0)   swap(n[i++],n[k++]);
            else if(n[i]==2)  swap(n[i],n[j--]);
            else i++;
        }
    }
};

  