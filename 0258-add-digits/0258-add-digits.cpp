class Solution {
public:
    int addDigits(int num) {
        int ans=0 ; 
        while(num>0){
            ans+=num%10;
            //cout<<num<<endl;
            num/=10;
           // cout<<num;
            if(num<10 && ans>9){
                ans+=num%10;
                //cout<<num<<" "<<ans<<endl;
                num=ans;
                ans=0;
            }
            
        }
        
        return ans;
    }
};