class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int l=1 , r=v.size()-2;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(v[mid] >v[mid-1] && v[mid]>v[mid+1]){                
                return mid;
            }
            else if(v[mid]<v[mid-1]) r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};

            
            