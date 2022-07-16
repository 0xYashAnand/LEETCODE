class Solution {
public:
    vector<string> fizzBuzz(int n) {
         vector<string> ans;
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5!=0) ans.push_back("Fizz");
            else if(i%3!=0 && i%5==0) ans.push_back("Buzz");
            else if(i%3==0 && i%5==0) ans.push_back("FizzBuzz");
            else{
                string k = (to_string)(i);
                ans.push_back(k);
            } 
        }
        return ans;
    }
};