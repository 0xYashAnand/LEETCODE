class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> st;
        vector<int> ans(nums1.size(),-1);
        map<int, int> mp;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            
            if(!st.empty()) mp[nums2[i]] = st.top();
            else mp[nums2[i]] = -1;
            
            st.push(nums2[i]);
        }
        
        int j = 0;
        for(int i: nums1){
            ans[j] = mp[i];
            j++;
        }           
        
        return ans;
    }
};


    