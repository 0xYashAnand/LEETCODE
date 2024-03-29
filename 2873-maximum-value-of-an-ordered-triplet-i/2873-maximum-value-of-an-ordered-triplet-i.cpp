class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
      int n = nums.size();
      long long int res = 0;

     for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                long long int temp = (nums[i] - nums[j]);
                temp*= nums[k];
                res = max(res, temp);
            }
        }
     }

     return res;  
    }
};