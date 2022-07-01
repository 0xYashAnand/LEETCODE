class Solution {

public:
    static bool compare(const vector<int> &v1,const vector<int> &v2){
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(), compare);
        int res=0 , sum=0;
        
       for(int i=0; i<boxTypes.size(); i++){
           if(truckSize>=sum+boxTypes[i][0]){
             res += boxTypes[i][0]*boxTypes[i][1];
             sum += boxTypes[i][0];  
               cout<<sum<<" ";
           }
           else{
               res += (truckSize-sum)*boxTypes[i][1];
               break;
           } 
             
        }
       return res;
    }
};